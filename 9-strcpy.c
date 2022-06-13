#include "main.h"

/**
 * _strcpy - copies the string pointed to
 * @src: source to copy
 * @dest: destination of copy
 *
 * Return: pointer 
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (*(src + i))
{
*(dest + i) = *(src + i);
i++;
}
*(dest + i) = '\0';
return (dest);
}
