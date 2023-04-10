#include "main.h"

/**
 * main - print the number of arguments
 *
 * @argc: gives the number of arguments
 *
 * @argv: gives the array of strings
 *
 * Return: returns 0 if successful
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
