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
	char back;

	for (back = 'z'; back >= 'a'; back--)
	{
		putchar(back);
	}
	putchar('\n');
	return (0);
}
