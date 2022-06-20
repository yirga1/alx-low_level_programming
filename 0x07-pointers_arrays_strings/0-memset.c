#include "main.h"
/**
 * _memset - memory filling
 * @s: source string
 * @b: constant byte
 * @n: buffer length
 * Return: string.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
