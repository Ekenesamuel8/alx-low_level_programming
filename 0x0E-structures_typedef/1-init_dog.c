#include <stdio.h>
#include "dog.h"
/**
 * init_dog - that initialize a variable of type struct dog
 * @d: varaible name
 * @name: char member
 * @age: float member
 * @owner: char member
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
