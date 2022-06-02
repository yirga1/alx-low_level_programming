#include <unistd.h>
/**
 * main - Prints out a string to stdout.
 * Return: 1 Always success
 */
int main(void)
{
char str1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2,str1,59);
	return (1);	
}

