#include <stdio.h>
#include <stdlib.h>
/**
* main - prints all arguments it receives, on a new line
* @argc: num of command prompt
* @argv: An array containing the program command line argument
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
