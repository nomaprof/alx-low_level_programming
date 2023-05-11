#include "main.h"

/**
 * myelf - is the file an elf file
 * @e_ident: pointer to array of magic numbers
 *
 * Return: no value
 */
void myelf(unsigned char *e_ident)
{
	int place;

	for (place = 0; place < 4; place++)
	{
		if (e_ident[place] != 127 &&
				e_ident[place] != 'E' &&
				e_ident[place] != 'L' &&
				e_ident[place] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * mymagic - send magic numbers to standard output
 * @e_ident: pointer to array of magic numbers
 *
 * Return: no value
 */
void mymagic(unsigned char *e_ident)
{
	int place;

	printf(" Magic: ");

	for (place = 0; place < EI_NIDENT; place++)
	{
		printf("%02x", e_ident[place]);

		if (place == EI_NIDENT - 1)
		{
			printf("\n");
		}
		else
		{
			printf(" ");
		}
	}
}

/**
 * myclass - prints the ELF header class
 * @e_ident: pointer to array of ELF classes
 *
 * Return: no value
 */
void myclass(unsigned char *e_ident)
{
	printf(" Class:                    ");

	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unidentified: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * mydata - prints the ELF header data
 * @e_ident: pointer to array of ELF data
 *
 * Return: no value
 */

void mydata(unsigned char *e_ident)
{
	printf(" Data:                     ");

	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unidentified: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * myosabi - prints the ELF header  OS/ABI
 * @e_ident: pointer to array of ELF data
 *
 * Return: no value
 */

void myosabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                                ");

	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unidentified: %x\n", e_ident[EI_OSABI]);
	}
}

/**
 * mytype - prints the elf header type
 * @e_ident: pointer to array of type
 * @e_type: the answer
 *
 * Return: no value
 */
void mytype(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_type >>= 8;
	}

	printf("  Type:                               ");

	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (none)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("unidentified: %x>\n", e_type);
	}
}

/**
 * myentry - print the elf header entry point
 * @e_entry: the entry point of elf header
 * @e_ident: pointer to an array
 *
 * Return: no value
 */
void myentry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("    Entry point address:                    ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) | ((e_entry >> 8) & 0XFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
	{
		printf("%#x\n", (unsigned int)e_entry);
	}
	else
	{
		printf("%#1x\n", (unsigned int)e_entry);
	}
}

/**
 * myclose - close the elf file up
 * @fix: the elf file to be closed
 *
 * Return: no value
 */
void myclose(int fix)
{
	if (close(fix) == -1)
	{
		dprintf(STDERR_FILENO, "Error: unable to close fd %d\n", fix);
		exit(98);
	}
}

/**
 * main - the display program
 * @argc: number of arguments
 * @argv: the array of arguments
 *
 * Return: result
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *answer;
	int ans1, ans2;

	ans1 = open(argv[1], O_RDONLY);

	if (ans1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: cannot read content of file %s\n", argv[1]);
		exit(98);
	}
	answer = malloc(sizeof(Elf64_Ehdr));

	if (answer == NULL)
	{
		myclose(ans1);
		dprintf(STDERR_FILENO, "Error:cannot read content of file %s\n", argv[1]);
		exit(98);
	}
	ans2 = read(ans1, answer, sizeof(Elf64_Ehdr));

	if (ans2 == -1)
	{
		free(answer);
		myclose(ans1);
		dprintf(STDERR_FILENO, "Error: `%s`: file not found\n", argv[1]);
		exit(98);
	}

	myelf(answer->e_ident);
	printf("ELF Header:\n");
	mymagic(answer->e_ident);
	myclass(answer->e_ident);
	mydata(answer->e_ident);
	myversion(answer->e_ident);
	myosabi(answer->e_ident);
	myabi(answer->e_ident);
	mytype(answer->e_type, answer->e_ident);
	myentry(answer->e_entry, answer->e_ident);

	free(answer);
	myclose(ans1);
	return (0);
}

/**
 * myabi - print the elf header ABI version
 * @e_ident: pointer to ABI version array
 *
 * Return: ABI version
 */
void myabi(unsigned char *e_ident)
{
	printf(" ABI Version:                               %d\n", e_ident[EI_ABIVERSION]);
}

/**
 * myversion - print the elf header version
 * @e_ident: pointer to elf header version
 *
 * Return: version of elf file
 */
void myversion(unsigned char *e_ident)
{
	printf(" Version:                             %d", e_ident[EI_VERSION]);
	switch(e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}
