#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l;
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (l = 'A'; l <= 'F'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
