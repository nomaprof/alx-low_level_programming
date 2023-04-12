#include "main.h"

/**
 * main - add positive mumbers
 *
 * @argc: count number of arguments
 *
 * @argv: arrary where arguments are stored
 *
 * Return: 1 if an argument is not an int
 */

int main(int argc, char *argv[])
{
	int m, ans = 0;

	if (argc > 1)
	{
		for (m = 1; m < argc; m++)
		{
			if ((*argv[m] < '0') || (*argv[m] > '9'))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				ans += atoi(argv[m]);
			}
		}
		printf("%d\n", ans);
	}
	else if (argc == 1)
	{
		printf("0\n");
	}
	return (0);
}
