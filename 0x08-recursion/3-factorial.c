#include "main.h"

/**
 * factorial - Calculates the factorial
 * @n: Number whose factorial is to be calculated
 * Return: int
 */

int factorial(int n)
{
if (n < 0)
retun (-1);
if (n <= 1)
return (1);
return (n * factorial(n - 1));
}
