#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, except for q and e.
 * Return: Always 0.
 */
int main(void)
{
char ltr;
for (ltr = 'a'; ltr <= 'z'; ltr++)
{
if (ltr != 'e' && ltr != 'q')
putchar(ltr);
}
putchar('\n');
return (0);
}
