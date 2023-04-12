#include "main.h"
/**
 * main - make change
 * @argc: number of arguments
 * @argv: array containing arguments
 * Return: 0 if the program is successful
 */
int main(int argc, char *argv[])
{
	int a, ans = 0;

	if (argc == 2)
	{
		a = atoi(argv[1]);
		if (a < 0)
		{
			printf("%d\n", 0);
			return (0);
		}
		if (a % 25 >= 0)
		{
			ans += a / 25;
			a = a % 25;
		}
		if (a % 10 >= 0)
		{
			ans += a / 10;
			a = a % 10;
		}
		if (a % 5 >= 0)
		{
			ans += a / 5;
			a =  a % 5;
		}
		if (a % 2 >= 0)
		{
			ans += a / 2;
			a = a % 2;
		}
		if (a % 1 >= 0)
		{
			ans += a / 1;
			printf("%d\n", ans);
			return (0);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
