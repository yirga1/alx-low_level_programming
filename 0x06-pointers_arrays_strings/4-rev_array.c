#include "main.h"
#include <string.h>

/**
* reverse_array -> reversing array
* @a: array a
* @n: element of an array
*/
void reverse_array(int *a, int n)
{
int *p, i, aux, k;
p = a;
for (i = 0; i < n; i++)
p++;
for (k = 0; k < n / 2; k++)
{
aux = a[k];
a[k]  = *p;
*p = aux;
p--;
}
}
