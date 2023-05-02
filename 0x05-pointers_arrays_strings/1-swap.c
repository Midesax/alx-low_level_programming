#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers.
 * @a: The first integer
 * @b: The second integer
 * Return: Nothing
 */

void swap_int(int *a, int *b)
/* The function that swaps the values of two integers. */
{
int temp = *a;
*a = *b;
*b = temp;
}
