#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes it
 * @size: size of the array
 * @c: the character to initialize the array
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}

	return (str);
}

