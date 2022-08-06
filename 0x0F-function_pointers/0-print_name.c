#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - f points to either func in main
 * @name: name
 * @f: pointer to print upp or non upp func
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
	unsigned int i;

	printf("game, my uppercase name is ");
	i = 0:
	while (name[i])
	{
		if (name[i] >= 'a' && name[i] <= 'z')
		{
			putchar(name[i] + 'A' - 'a');
		}
		else
		{
			putchar(name[i]);
		}
		i++;
	}
}
