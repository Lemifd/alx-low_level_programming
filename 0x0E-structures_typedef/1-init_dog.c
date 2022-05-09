#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog- initializes a variable of type struct dog
 * @d: pointer to elements of the structure
 * @name: name
 * @age: age
 * @owner: owner
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
