#include "main.h"

/**
 * binary_to_unit - convert binary to unsigned int
 * @b: a constant character type representing the binary string
 *
 * Return: the unsigned integer or converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int hold = 1, answer = 0, span = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[span])
	{
		span++;
	}
	while (span)
	{
		if (b[span - 1] != '0' && b[span - 1] != '1')
		{
			return (0);
		}
		if (b[span - 1] == '1')
		{
			answer += hold;
		}
		hold *= 2;
		span--;
	}
	return (answer);
}
