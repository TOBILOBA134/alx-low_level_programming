#include "main.h"
/**
* more_numbers - print num from 0 - 10
*
* Return: void
*/

void more_numbers(void)
{
	int i;
	int t;

	for (i = 0; i <= 9; i++)
	{
		for (t = 0; t <= 14; t++)
		{
			if (t >= 10)
			{
				_putchar(t / 10 + '0');
			}
			_putchar(t % 10 + '0');
		}
		_putchar('\n');
	}
}
