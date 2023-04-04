#include "main.h"

/**
*_memset - The function to modify buffer
*@s: pointer to location
*@b: value to be entered
*@n: no of bytes to be changed
*Return: returns the new value (s)
*/

char *_memset(char *s, char b, unsigned int n)
{

	while (n--)
	{
		s[n] = b;
	}

	return (s);
}
