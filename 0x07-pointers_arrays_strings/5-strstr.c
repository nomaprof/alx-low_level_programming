#include "main.h"

/**
*_strstr - Find the needle in the haystack
*@haystack: Reference string
*@needle: The string hid in the haystack
*Return: A pointer to the start of found substring
*/

char *_strstr(char *haystack, char *needle)
{
	int m, n;

	for (m = 0; haystack[m] != '\0'; m++)
	{
		for (n = 0; needle[n] != '\0'; n++)
		{
			while (*haystack)
			{
				if ((needle[n] == haystack[m]) && (needle[n] != '\0'))
				{
					return (haystack);
				}

				haystack++;
			}
		}
	}

	return (NULL);
}
