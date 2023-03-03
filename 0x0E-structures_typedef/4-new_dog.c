#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - function creates a new dog
 *
 * @name: name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: dog_t a structure with info on
 * the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	char *name_cpy, *owner_cpy;

	if (!name || age < 0 || !owner)
		return (NULL);

	newdog = malloc(sizeof(*newdog));
	name_cpy = malloc(strlen(name) + 1);
	owner_cpy = malloc(strlen(owner) + 1);

	if (!newdog || !name_cpy || !owner_cpy)
	{
		free(name_cpy);
		free(owner_cpy);
		free(newdog);
		return (NULL);
	}

	strcpy(name_cpy, name);
	strcpy(owner_cpy, owner);

	newdog->name = name_cpy;
	newdog->age = age;
	newdog->owner = owner_cpy;

	return (newdog);
}
