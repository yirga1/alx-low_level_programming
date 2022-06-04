#include <stdio.h>
/**
 * main - Prints lowercase then  uppercase.
 * Return: 0 if successful
 */
int main(void)
{
char a = 'a';
char b = 'A';
while (a <= 'z')
{
putchar(a);
a++;
}
while (b <= 'Z')
{
putchar(b);
b++;
}
putchar('\n');
return (0);
}
