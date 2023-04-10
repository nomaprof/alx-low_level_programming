#include "main.h"

/**
 * main - multiply two numbers
 *
 * @argc: number of arguments
 *
 * @argv: array where arguments are stored
 *
 * Return: 1 if no argument is passed
 */

int main(int argc, char *argv[])
{
	int answer;

	if (argc == 3)
	{
		answer = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", answer);
	}
	else
	{
		printf("Error\n");

		return (1);
	}

	return (0);
}
