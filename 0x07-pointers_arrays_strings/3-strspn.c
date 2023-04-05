#include "main.h"

/**
*_strspn - checks out the number of similar bytes in two strings
*@s: string considered
*@accept: string used as reference
*
*Return: the number of bytes that are similar
*/

unsigned int _strspn(char *s, char *accept)
{
	int n, m;
	int o = 0;

	for (n = 0; (s[n] != '\0'); n++)
	{
		for (m = 0; (accept[m] != '\0'); m++)
		{
			if (s[n] == accept[m])
			{
				o++;
			}
			else
				o = o;
		}
	}
	return (o);
}
