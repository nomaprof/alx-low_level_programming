#include "main.h"

/**
*_memcpy - Copies source to destination
*@dest: place where is sent
*@src: Place where data is copied
*@n: size of copied data
*Return: values stored in dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

