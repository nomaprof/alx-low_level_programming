#include "main.h"

/**
 * get_endianness -  how bits are arraged in the LSB and MSB
 *
 * Return: the endianness of the binary input
 */

int get_endianness(void)
{
	unsigned int m = 1;
	char *ans = (char *)&m;

	if (*ans)
	{
		return (1);
	}
	return (0);
}
