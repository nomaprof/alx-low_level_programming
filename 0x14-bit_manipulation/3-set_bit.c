#include "main.h"

/**
 * set_bit - set the bit position to 1
 * @n: the integer
 * @index: the bit position of interest
 *
 * Return: the value of bit position set to 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int furthest = 0x01;

	furthest <<= index;

	if (furthest == 0x00)
	{
		return (-1);
	}
	*n |= furthest;
	return (1);
}

