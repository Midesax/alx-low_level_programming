#include "main.h"

/**
 * reverse_array - Reverses the content of an array
 * @a: The array of integers to be reversed
 * @n: The number of elements in the array
 * Return: Void
 */

void reverse_array(int *a, int n)
{
int tmp, i;
for (i = n - 1; i >= n / 2; i--)
{
tmp = a[n - 1 - i];
a[n - 1 - i] = a[i];
a[i] = tmp;
}
}
