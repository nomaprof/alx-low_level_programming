#include "main.h"

int make_end(int);

/**
 * main - the program for copying files
 * @argc: number of parameters
 * @argv: pointer to the array of parameters
 *
 * Return: the new file containing copied information
 */

int main(int argc, char *argv[])
{
	char holding[1024];
	int readlen = 0, endoffile = 1, filefd = -1, filetd = -1, margin = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	filefd = open(argv[1], O_RDONLY);

	if (filefd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	filetd = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);

	if (filetd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		make_end(filefd);
		exit(99);
	}

	while (endoffile)
	{
		endoffile = read(filefd, holding, 1024);

		if (endoffile < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			make_end(filefd);
			make_end(filetd);
			exit(98);
		}
		else if (endoffile == 0)
		{
			break;
		}
		readlen += endoffile;
		margin = write(filetd, holding, endoffile);
		if (margin < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			make_end(filefd);
			make_end(filetd);
			exit(99);
		}
	}
	margin = make_end(filetd);
	if (margin < 0)
	{
		make_end(filefd);
		exit(100);
	}
	margin = make_end(filefd);
	if (margin < 0)
	{
		exit(100);
	}
	return (0);
}

/**
 * make_close - close a file
 * @action: action taken to close file
 * 
 * Return: file closed
 */

int make_end(int action)
{
	int margin;

	margin = close(action);

	if (margin < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file description %d\n", action);
	}
		return (margin);
}
