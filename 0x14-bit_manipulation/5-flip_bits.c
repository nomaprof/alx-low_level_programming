#include "main.h"

/**
 * flip_bits - toggle only the number bits needed to go to next value
 * @n: the integer
 * @m: the mask used to toggle bit positions
 *
 * Return: number of bit toggled
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int answer =  (n ^ m);
	int track = 0;
	unsigned long int furthest = 0x01;

	while (furthest <= answer)
	{
		if (furthest & answer)
		{
			track++;
		}
		furthest <<= 1;
	}
	return (track);
}
