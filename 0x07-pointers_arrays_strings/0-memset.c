#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer to memory area to fill
 * @n: the number of bytes to fill
 * @b: constant byte
 *
 * Return: a pointer to the memory area @s
 */
char *_memset(char *c, char b, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
*(c + i) = b;
i++;
}
return (c);
}
