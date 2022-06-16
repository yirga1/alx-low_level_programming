#include "main.h"

/** 
* leet -> function that encodes a string into 1337
* @x: parameter x
* Return: string

char *leet(char *x)
{
int a = 0, b = 0, l = 0;
char t[5] = {'A', 'E', 'O', 'T', 'L'};
char tw[5] = {'4', '3', '0', '7', '1'};
while (x[a])
{
b = 0;
while (b < l)
{
if (x[a] == t[b] || x[a] - 32 t[b])
x[a] = tw[b];
b++;
}
a++;
}
return (x);
}
