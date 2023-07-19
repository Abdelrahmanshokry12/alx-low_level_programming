#include "main.h"
#include <stdio.h>
/**
 * print_name - a
 * @name: qa
 * @f: za
 * Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
