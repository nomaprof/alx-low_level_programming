#include "3-calc.h"

/**
 * main - carry out maths
 * @argc: count arguments
 * @argv: list arguments by pointing
 * Return: success
 */

int main(int argc, char *argv[])
{
	int (*ans)(int num1, int num2);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	ans = get_op_func(argv[2]);
	if (ans == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", ans(atoi(argv[1]), atoi(argv[3])));
	return (0);
}

