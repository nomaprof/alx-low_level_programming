#include "main.h"

/**
 *_strcat - concatenates  the string pointed to by @src to
 * the end of the string pointed to by @dest
 *@dest: String that will be appended
 *@src: String to be concatenated upon
 *
 * Return: returns pointer to @dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; ++i)
	{
	}
		for (j = 0; src[j] != '\0'; ++j, ++i)
		{
			dest[i] = src[j];
		}
	dest[i] = '\0';
	return (dest);
}
