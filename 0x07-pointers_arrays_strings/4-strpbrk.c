#include "main.h"

/**
*_strpbrk - Locate the first time a character occurs in a string
*
*@s: The reference string
*@accept: The string to be considered
*
*Return: pointer to the result or null if there is no match
*/

char *_strpbrk(char *s, char *accept)
{
	int n;

	while (*s)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == *s)
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
