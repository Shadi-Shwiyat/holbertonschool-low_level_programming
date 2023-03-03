#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function initializes a variable of
 * type struct dog
 *
 * @d: the variable to initialize
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
