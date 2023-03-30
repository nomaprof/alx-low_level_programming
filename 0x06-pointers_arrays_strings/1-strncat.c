#include "main.h"
/**
 *_strncat - concatenate two strings but add inputted number of bytes
 *@dest: string to be appended upon
 *@src: string to be completed at end of dest
 *@n:integer parameter to compare index to
 *Return: returns new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; ++i)
	{
	}
	for (j = 0; src[j] != '\0' && j < n; ++j, ++i)
	{
		dest[i] = src[j];
	}

	dest[i] = '\0';

	return (dest);
}
