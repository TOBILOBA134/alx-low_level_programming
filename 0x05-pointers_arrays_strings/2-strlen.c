#include "main.h"
/**
* _strlen - lenght of string
* @s: check string
* Return: 0
*
*/

int _strlen(char *s)
{
	int a = 0;

	for (; *s != '\0'; s++)
	{
		a++;
	}
	return (a);
}
