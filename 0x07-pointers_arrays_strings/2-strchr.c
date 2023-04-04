#include "main.h"

/**
*_strchr - Get first occurence of character in a string
*
*@s: The string of concern
*@c: The character to find
*
*Return:The pointer to the answer
*/

char *_strchr(char *s, char c)
{
	int n;

	for (n = 0; ((s[n] != c) && (s[n] != '\0')); n++)
	{
	}

		if (s[n] == c)

			return (s + n);

		else

			return (NULL);

}
