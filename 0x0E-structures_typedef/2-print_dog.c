#include "dog.h"
#include <stdio.h>
/**
* print_dog - function that prints a struct dog
* @d: struct
*
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf(" ");
	}

	if (d->name == NULL)
	{
		printf("Name: (nile)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}

	if (d->age < 0)
	{
		printf("Age: (nile)\n");
	}
	else
	{
		printf("Age: %f\n", d->age);
	}

	if (d->owner == NULL)
	{
		printf("Owner: (nile)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
