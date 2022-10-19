#include "main.h"
/**
* print_sign - prints the sign of a number
* @n: The number of which the sign will be printed.
*
*Return: 1 if the number is > 0;
 0 if the number is == 0;
 -1 if the number is < 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
	_putchar('\n');
}
