#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: the number allocate memory
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *n;

	n = malloc(b);
	if (n == NULL)
		exit(98);
	return (n);
}

