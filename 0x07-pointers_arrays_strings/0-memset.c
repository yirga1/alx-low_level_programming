#include "main.h"

/**
* _memset -> memory set function
* @s -> string
* @b -> character
* @n -> integer
* Return: string
*/
char *_memset(char *s, char b, unsigned int n)
{
usigned int a;
for (a = 0; a < n; a++)
s[a] = b;  
return (s);
}
