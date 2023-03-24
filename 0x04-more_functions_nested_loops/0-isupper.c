#include "main.h"

/**
*_isupper - function that verifies if a  character is uppercase or not
*@c: tested character
*Return: returns 1 if it is uppercase , 0 if not
*/

int _isupper(int c)
{
	char ch;
	int isupper;

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		if (c == ch)
		{
			isupper = 1;
		}
		else
		{
			isupper = 0;
		}
	}
	return (isupper);
}
