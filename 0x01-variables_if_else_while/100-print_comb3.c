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
	int x;

	for (i = '0'; i <= '8'; i++)
	{
		for (x = '1'; x <= '9'; x++)
		{
			putchar(i);
			putchar(x);
			putchar(',');
			putchar(' ');
			
		}
	}
	putchar('\n');
	return (0);

}
