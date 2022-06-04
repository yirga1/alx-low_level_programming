#include <stdio.h>
/**
 * main - reverse alphabet
 * Return: 0 if success
 */
int main(void)
{
char i = 'z';
while (i >= 'a')
{
putchar(i);
i++;
}
putchar('\n');
return (0);
}
