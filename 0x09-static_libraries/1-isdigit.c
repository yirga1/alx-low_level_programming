#include "main.h"
#include <stdio.h>
/**
*_isdigit - checks a digit
*@c: integer to be entered
*Return: 1 if c is a digit and 0 if otherwise
*/

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
