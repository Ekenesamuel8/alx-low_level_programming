#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"
/**
 * *new_dog - functio that create a new dog
 * @name: the string member
 * @owner: the string member
 * @age: the age
 * Return: the pointer dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *og;
	char *cpyname;
	char *cpyowner;

	og = malloc(sizeof(dog_t));

	if (og == NULL)
		return (NULL);

	cpyname = malloc(sizeof(char) * strlen(name) + 1);

	if (cpyname == NULL)
	{
		free(og);
		return (NULL);
	}

	cpyowner = malloc(sizeof(char) * strlen(owner) + 1);

	if (cpyowner == NULL)
	{
		free(cpyname);
		free(og);
		return (NULL);
	}

	strcpy(cpyname, name);
	strcpy(cpyowner, owner);

	og->name = name;
	og->age = age;
	og->owner = owner;

	return (og);
}
