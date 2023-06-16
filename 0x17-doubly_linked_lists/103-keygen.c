#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * f4 -get biggest number
 *
 * @usrn: name of user
 * @len: the users info length
 * Return: the value of the biggest number
 */
int f4(char *usrn, int len)
{
	int ch;
	int rch;
	unsigned int rand_num;

	ch = *usrn;
	rch = 0;

	while (rch < len)
	{
		if (ch < usrn[rch])
			ch = usrn[rch];
		rch += 1;
	}

	srand(ch ^ 14);
	rand_num = rand();

	return (rand_num & 63);
}

/**
 * f5 - each user name multiplied to get another
 *
 * @usrn: name of user
 * @len: user information length
 * Return: answer after multiplicaton
 */
int f5(char *usrn, int len)
{
	int ch;
	int rch;

	ch = rch = 0;

	while (rch < len)
	{
		ch = ch + usrn[rch] * usrn[rch];
		rch += 1;
	}

	return (((unsigned int)ch ^ 239) & 63);
}

/**
 * f6 - provide random character
 *
 * @usrn: name of user
 * Return: the random character
 */
int f6(char *usrn)
{
	int ch;
	int rch;

	ch = rch = 0;

	while (rch < *usrn)
	{
		ch = rand();
		rch += 1;
	}

	return (((unsigned int)ch ^ 229) & 63);
}

/**
 * main - The main code
 *
 * @argc: provide argument count
 * @argv: position of argument
 * Return: Success or Failure
 */
int main(int argc, char **argv)
{
	char keygen[7];
	int len, ch, rch;
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };
	(void) argc;

	for (len = 0; argv[1][len]; len++)
		;
	/* ----------- f1 ----------- */
	keygen[0] = ((char *)alph)[(len ^ 59) & 63];
	/* ----------- f2 ----------- */
	ch = rch = 0;
	while (rch < len)
	{
		ch = ch + argv[1][rch];
		rch = rch + 1;
	}
	keygen[1] = ((char *)alph)[(ch ^ 79) & 63];
	/* ----------- f3 ----------- */
	ch = 1;
	rch = 0;
	while (rch < len)
	{
		ch = argv[1][rch] * ch;
		rch = rch + 1;
	}
	keygen[2] = ((char *)alph)[(ch ^ 85) & 63];
	/* ----------- f4 ----------- */
	keygen[3] = ((char *)alph)[f4(argv[1], len)];
	/* ----------- f5 ----------- */
	keygen[4] = ((char *)alph)[f5(argv[1], len)];
	/* ----------- f6 ----------- */
	keygen[5] = ((char *)alph)[f6(argv[1])];
	keygen[6] = '\0';
	for (ch = 0; keygen[ch]; ch++)
		printf("%c", keygen[ch]);
	return (0);
}
