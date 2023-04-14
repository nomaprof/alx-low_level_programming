#include "main.h"

/**
 * main - the product of two numbers in base 10
 *
 * @argc: counts the number of arguments
 *
 * @argv: notes the arguments passed
 *
 * Return: void
 */

int main(int argc, char **argv)
{
	int num1, num2, ans;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		ans = num1 * num2;
		printf("%d\n", ans);
		return (0);
	}
}
