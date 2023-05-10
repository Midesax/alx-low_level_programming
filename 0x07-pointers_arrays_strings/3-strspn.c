#include "main.h"

/**
 * _strspn - Entry point
 * @accept: Input
 * @s: Input
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, n, val, get;
val = 0;
for (i = 0; s[i] != '\0'; i++)
{
get = 0;
for (n = 0; accept[n] != '\0'; n++)
{
if (accept[n] == s[i])
{
val++;
check = 1;
}
}
