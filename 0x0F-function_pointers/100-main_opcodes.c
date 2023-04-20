#include <stdio.h>
#include <stdlib.h>

/**
 * main - the opcodes
 * @argc: count number of arguments passed
 * @argv: point to array containing arguments
 * Return: success
 */

int main(int argc, char *argv[])
{
	int bytes, n;
	char *ans;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ans = (char *)main;
	n = 0;
	if (bytes > 0)
	{
		while (n < (bytes - 1))
		{
			printf("%02hhx ", ans[n++]);
		}
		printf("%hhx\n", ans[n]);
	}
	return (0);
}
