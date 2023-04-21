#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: gaps in the list
 * @n: the numbers to print
 * Return: no value
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list mp;
	int ans;
	unsigned int x;

	va_start(mp, n);
	for (x =  0; x < n; x++)
	{
		ans =  va_arg(mp, int);
		printf("%d", ans);

		if ((separator != NULL) && (x != (n - 1)))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(mp);
}
