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
usigned int a;
for (a = 0; a < n; a++)
s[a] = b;
return (s);
}
