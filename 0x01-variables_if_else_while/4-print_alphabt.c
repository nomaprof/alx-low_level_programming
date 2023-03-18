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
	char alphabet = 'a';

	for (; alphabet <= 'z' && alphabet != 'q' && alphabet != 'e'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
