#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array
 * @min: the smallest integer
 * @max: the largest integer
 * Return: the pointer to the newly created array, NULL if min > max,
 * NULL if malloc fails
 */

int *array_range(int min, int max)
{
	int *a;
	int i;
	int j = 0;

	if (min > max)
		return (NULL);

	a = malloc(sizeof(int) * (max - min + 1));
	if (a == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		a[j] = i;
		j++;
	}

	return (a);
}

