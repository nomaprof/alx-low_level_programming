#include "main.h"

/**
*  _strcmp - Function which compare two strings and
*@s1: first string
*@s2:second string
*Return:
*		returns zero if s1 == s2
*		returns negative number if s1 < s2
*		returns positive number if s1 > s2
*/

int _strcmp(char *s1, char *s2)
{
	int i, j, sum;

	for (i = 0; s1[i] != '\0'; ++i)
	{
	}
	for (j = 0; s2[j] != '\0'; ++j)
	{
	}
	if (i < j)
	{
		sum = (-(i + j + 4));
	}
	else if (i > j)
	{
		sum = (i + j + 4);
	}
	else
	{
		sum = 0;
	}

	return (sum);
}
