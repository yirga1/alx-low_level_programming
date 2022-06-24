#include "main.h"
#include <stdio.h>

/**
 * main - program that prints its name, followed by a new line
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[0]);
		i++;
	}
	return (0);
}
