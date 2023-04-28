#include "lists.h"

void __attribute__((constructor)) message(void);

/**
 * message - the message to be written before main is executed
 * Return: no value
 */

void message(void)
{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}
