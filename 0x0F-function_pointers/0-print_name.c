#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - Prints a name.
 * @name: the name to be printed
 * @f: a pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
{
return;
}
f(name);
}
