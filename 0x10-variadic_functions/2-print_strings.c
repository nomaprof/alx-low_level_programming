#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: print gaps
 * @n: the printed string
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list mp;
	char *ans;
	unsigned int x;

	va_start(mp, n);
	for (x = 0; x < n; x++)
	{
		ans = va_arg(mp, char *);
		if (ans == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", ans);
		}
		if ((separator != NULL) && (x != (n - 1)))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(mp);
}
