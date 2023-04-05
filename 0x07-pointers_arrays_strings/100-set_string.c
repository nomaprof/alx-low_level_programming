#include "main.h"

/**
* set_string - make the value of a pointer a char
*@s: The remote pointer
*@to: The char guy
*
*/

void set_string(char **s, char *to)
{
	*s = to;
}
