#include "main.h"

/**
* cap_string -> capitalizes all words of a string
* @x: string parameter
* Return: capitalize verstion of string
*/
char *cap_string(char *x)
{
char sp[] = {39, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
int len = 13;
int a = 0;
int i;
while (x[a])
{
i = 0;
while (i < len)
{
if ((a == 0 || s[a - 1] == sp[i]) && (s[a] >= 97 && s[a] <=122))
s[a] = s[a] - 32;
i++;
}
a++;
}
return (x);
}
