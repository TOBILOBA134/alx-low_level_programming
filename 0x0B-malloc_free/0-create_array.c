#include <stdlib.h>
/**
* create_array - a function that creates an array
* @size: size of the array
* @c: pointer of the array
* Return: pointer
*/
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (0);
	}

	array = malloc(sizeof(char) * size);
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
