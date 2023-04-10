#include "main.h"

/**
 * main - print all arguments received
 *
 * @argc: number of arguments
 *
 * @argv: array where arguments are stored
 *
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int m;

	for (m = 0; m < argc; m++)
	{
		printf("%s\n", argv[m]);
	}

	return (0);
}
