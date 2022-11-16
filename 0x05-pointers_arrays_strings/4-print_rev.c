#include "main.h"

/**
* print_rev - print the string in a reverse form
* @s: string to be printed in reverse way
*
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
