#include "main.h"

/**
 * _puts - returns the length of a string.
 *
 * @str: pointer to char
 * Return: empy
 */
void _puts(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i += 1;
}
_putchar('\n');
}
