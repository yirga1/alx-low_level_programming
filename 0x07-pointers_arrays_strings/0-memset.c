#include "main.h"

/**
* _memset -> memory set function
* @s -> a string
* @b -> a character
* @n -> an integer
* Return: string
*/
char *_memset(char *s, char b, unsigned int n)
{
usigned int a;
for (a = 0; a < n; a++)
s[a] = b;  
return (s);
}
