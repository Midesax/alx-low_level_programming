#include "main.h"

/**
 * _memset - Entry point
 * @n: The bytes
 * @s: The pointed destination
 * @b: constant byte
 * Return: Always 0 (Success)
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
s[i] = b;

return (s);	
}
