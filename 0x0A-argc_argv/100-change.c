#include "main.h"
/**
 * main - make change
 *
 * @argc: number of arguments
 *
 * @argv: array containing arguments
 *
 * Return: 0 if the program is successful
 */

int main(int argc, char *argv[])
{
	int ans, a;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	
	a = atoi(argv[1]);

	if ((a > 25) && ((a % 25) == 0))
	{
		ans = (a / 25);
	}
	else if ((a > 25) && ((a % 25) != 0) && (((a % 25) % 2) == 0))
	{
		ans = (a / 25) + ((a % 25) / 2);
	}
	else if ((a > 25) && ((a % 25) != 0) && (((a % 25) % 2) != 0))
	{
		ans = (a / 25) + ((a % 25) / 2) + 1;
	}
	else if ((a < 25) && (a >= 10) && ((a % 10) == 0))
	{
		ans = (a / 10);
	}
	else if ((a < 25) && (a >= 10) && ((a % 10) != 0) && (((a % 10) % 2) == 0))
	{
		ans = (a / 10) + ((a % 10) / 2);
	}
	else if ((a < 25) && (a >= 10) && ((a % 10) != 0) && (((a % 10) % 2) != 0))
	{
		ans = (a / 10) + ((a % 10) / 2) + 1;
	}
	else if ((a < 10) && (a >= 5) && ((a % 5) == 0))
	{
		ans = (a / 5);
	}
	else if ((a < 10) && (a >= 5) && ((a % 5) != 0) && (((a % 5) % 2) == 0))
	{
		ans = (a / 5) + ((a % 5) / 2);
	}
	else if ((a < 10) && (a >= 5) && ((a % 5) != 0) && (((a % 5) % 2) != 0))
	{
		ans = (a / 5) + ((a % 5) / 2) + 1;
	}
	else if ((a < 5) && (a >= 2) && ((a % 2) == 0))
	{
		ans = (a / 2);
	}
	else if ((a < 5) && (a >= 2) && ((a % 2) != 0))
	{
		ans = (a / 2) + 1;
	}
	else if (a == 1)
	{
		ans = 1;
	}

	printf("%d\n", ans);

	return (0);
}
