#include "main.h"

/**
 * get_bit - get the value of a given bit index of interest
 * @n: the integer valule
 * @index: the bit position of interest
 *
 * Return: the value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
