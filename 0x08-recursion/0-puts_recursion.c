#include "main.h"

/**
 * _puts_recursion - Print a string followed by a new line
 * @s: New string to print
 * Return: Void
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
s++;
_puts_recursion(s);
}
