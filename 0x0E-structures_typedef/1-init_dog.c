#include <stdio.h>
#include "dog.h"
/**
 * init_dog -Entry point
 * @d: pointer to stuct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dogs owner
 * Return: 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
