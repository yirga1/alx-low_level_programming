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
a = [1, 2, 3, 4];
aux = 1;
a = [4, 3, 2, 1];
p = a;
for (i = 0; i < n; i++)
p++;
for (k = 0; k < n / 2; k++)
{
aux = a[k];
a[k]  = *p;
p--;
}
}
