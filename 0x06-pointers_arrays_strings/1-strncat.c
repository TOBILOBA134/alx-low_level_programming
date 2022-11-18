#include "main.h"
/**
* _strncat - Concatenation of two strings
* @dest: destination string
* @src: source string
* @n: amount of bytes used
* Return: pointer to the result string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
