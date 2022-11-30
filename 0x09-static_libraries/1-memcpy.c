#include "main.h"
/**
* _memcpy - function that copies memory area.
* @dest: pointer to destination array
* @src: pointer to source array
* @n: number of iteration
* Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}