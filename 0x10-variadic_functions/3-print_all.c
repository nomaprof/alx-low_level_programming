#include "variadic_functions.h"

/**
 * print_all - print anything
 * @format: any kind of data
 * Return: no value
 */

void print_all(const char * const format, ...)
{
	va_list mp;
	char *ans;
	int n = 0;

	va_start(mp, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[n])
	{
		switch (format[n])
		{
			case 'c':
				printf("%c", (char) va_arg(mp, int));
				break;
			case 'i':
				printf("%d", va_arg(mp, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(mp, double));
				break;
			case 's':
				ans = va_arg(mp, char *);
				if (ans != NULL)
				{
					printf("%s", ans);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[n] == 'c' || format[n] == 'i' || format[n] == 'f' || format[n] == 's') && format[(n + 1)] != '\0')
		{
			printf(", ");
		}
		n++;
	}
	va_end(mp);
	printf("\n");
}

