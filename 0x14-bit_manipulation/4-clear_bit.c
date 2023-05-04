#include "main.h"

/**
 * clear_bit - set the bit position to zero
 * @n: the integer
 * @index: the bit position to be cleared
 *
 * Return: the result with the cleared bit position
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int furthest = 0x01;

	furthest = ~(furthest << index);

	if (furthest == 0x00)
	{
		return (-1);
	}
	*n &= furthest;
	return (1);
}
