#include "main.h"

/**
 * print_square - printing the square #
 * @size: size of the square
 *
 * Return: void
 */

void print_square(int size)
{
	int i;
	int e;

	for (i = 0; i < size; i++)
	{
		for (e = 0; e < size; e++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
