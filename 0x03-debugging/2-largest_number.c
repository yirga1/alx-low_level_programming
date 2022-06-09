<<<<<<< HEAD
nclude "main.h"
=======
#include "main.h"

>>>>>>> dc64c262ad6cea340a9b2c17ae8ccbe02e4a814b
/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{int largest;

if (a > b && a > c)
{
largest = a;
}
else if (b > c)
{
largest = b;
}
else
{
largest = c;
}
<<<<<<< HEAD
eturn (largest);
=======

return (largest);
>>>>>>> dc64c262ad6cea340a9b2c17ae8ccbe02e4a814b
}
