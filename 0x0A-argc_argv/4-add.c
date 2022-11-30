#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
* main - a program that adds positive numbers
* @argc: num of command prompt
* @argv: An array containing the program command line argument
* Return: 0
*/
int main(int argc, char *argv[])
{
	unsigned int i, sum, num;

	sum = 0;

	if (argc < 1)
	{
		printf("0\n");
		return (0);
	}
	while (argc-- && argc > 0)
	{
		for (i = 0; argv[argc][i] != '\0'; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[argc]);
		sum += num;
	}
	printf("%d\n", sum);
	return (sum);
}
