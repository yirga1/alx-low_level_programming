#include "main.h"

/**
 * _isupper - check for uppercase
 *
 * Description: Prints t with _putchar
 * @c: charater
 * Return: void
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
