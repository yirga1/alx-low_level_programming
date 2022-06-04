#include <stdio.h>
/**
 * main - all combinations of single digits
 * Return: 0 for success
 */
int main(void)
{
int j = '0';
while (j <= '9')
{
putchar(j);
if (j != '9')
{
putchar(',');
putchar(' ');
}
j++;
}
putchar('\n');
return (0);
}
