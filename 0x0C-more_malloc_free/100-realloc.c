#include "main.c"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to
 * malloc: malloc(old_size)
 * @old_size: the size, in bytes, of the allocated space for @ptr
 * @new_size: the new size, in bytes of the new memory block
 * Return: @ptr if @new_size == @old_size, NULL if new_size == 0 &&
 * @ptr != NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *c;
	char *oldar = ptr;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		c = malloc(new_size);
		return (c);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	c = malloc(new_size);
	if (c == NULL)
		return (NULL);

	for (i = 0; i < old_size; i++)
		c[i] = oldar[i];

	free(oldar);
	return (c);
}

