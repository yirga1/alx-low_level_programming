#include "main.h"

/**
 * _strlen -  length of a string
 * @s: string to find length
 *
 * Return: length of s
 */
int _strlen(char *s)
{
int i = 0;
while (*(s + i))
i++;
return (i);
}
