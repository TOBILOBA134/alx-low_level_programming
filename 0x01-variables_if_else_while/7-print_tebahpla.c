#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 'z'; i <= 'a'; i++)
	{
		putchar(i);
	}
	putchar(i);
	return (0);
}
