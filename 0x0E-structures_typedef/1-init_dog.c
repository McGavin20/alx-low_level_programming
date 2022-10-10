#include "dog.h"
#include <stdlib>

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer
 * @name: char type pointer
 * @age: float number
 * @owner: is a char type pointer
 * Return: void;
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
