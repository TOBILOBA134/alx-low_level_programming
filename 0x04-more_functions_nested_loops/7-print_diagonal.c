#include "main.h"

/**
 * print_diagonal - printing diagonal lines
 * @n: number of times
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int x;
	int m;

	for (x = 0; x < n; x++)
	{
		for (m = 0; m < x; m++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
