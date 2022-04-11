#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - create a new dog
 *
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: NULL if malloc fails
 * pointer to new if successful
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new = (dog_t *)malloc(sizeof(dog_t));

	if (new == NULL)
		return (NULL);
	new->name = name;
	new->age = age;
	new->owner = owner;
	return (new);
}
