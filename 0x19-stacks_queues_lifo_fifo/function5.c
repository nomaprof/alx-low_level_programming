#include "monty.h"
/**
 * _strcmp - compare two strings
 * @s1: first string
 * @s2: second string
 * Return: return integer indicating whether s1 and s2 are the same
 */
int _strcmp(char *s1, char *s2)
{
	int m;

	for (m = 0; s1[m] == s2[m] && s1[m]; m++)
		;
	if (s1[m] > s2[m])
		return (1);
	if (s1[m] < s2[m])
		return (-1);
	return (0);
}

/**
 * _sch - look for a character in a string
 * @s: the string
 * @c: the character
 * Return: success or failure
 */
int _sch(char *s, char c)
{
	int track = 0;

	while (s[track] != '\0')
	{
		if (s[track] == c)
		{
			break;
		}
		track++;
	}
	if (s[track] == c)
		return (1);
	else
		return (0);
}

/**
 * _strtoky - tokenize a string
 * @s: the string
 * @d: the elements used to determine how string is tokenized
 * Return: the very first token
 */
char *_strtoky(char *s, char *d)
{
	static char *toks;
	int i = 0, j = 0;

	if (!s)
		s = toks;
	while (s[i] != '\0')
	{
		if (_sch(d, s[i]) == 0 && s[i + 1] == '\0')
		{
			toks = s + i + 1;
			*toks = '\0';
			s = s + j;
			return (s);
		}
		else if (_sch(d, s[i]) == 0 && _sch(d, s[i + 1]) == 0)
			i++;
		else if (_sch(d, s[i]) == 0 && _sch(d, s[i + 1]) == 1)
		{
			toks = s + i + 1;
			*toks = '\0';
			toks++;
			s = s + j;
			return (s);
		}
		else if (_sch(d, s[i]) == 1)
		{
			j++;
			i++;
		}
	}
	return (NULL);
}
