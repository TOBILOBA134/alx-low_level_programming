#include "main.h"
/**
* print_alphabet_x10 - print a to z 10 times
*
* Return: Always 0
*/
void print_alphabet_x10(void)
{
	char i;
	char x;

	for (i = 1; i <= 10; i++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}

		_putchar('\n');
	}
}
