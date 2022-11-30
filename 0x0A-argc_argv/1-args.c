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
	int i;
	(void) argv;

	for  (i = 0; i < argc; i++)
		printf("%d\n", i);
	return (0);
}
