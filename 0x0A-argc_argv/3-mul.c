#include <stdio.h>
#include <stdlib.h>
/**
* main - prints the number of arguments passed into it.
* @argc: num of command prompt
* @argv: An array containing the program command line argument
* Return: 0
*/
int main(int argc, char *argv[])
{
	int multi = 1;
	int i;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		multi = multi * atoi(argv[i]);
	}
	printf("%d\n", multi);
	return (0);
}
