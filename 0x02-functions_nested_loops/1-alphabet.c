include "main.h"
/**
 * main - print alphabet.
 * Return: 0 success.
 * Discription - about printing alphabet.
 */
void print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
