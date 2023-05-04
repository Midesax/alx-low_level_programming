#include "main.h"

/**
 * _strcmp - Compare pointer to two strings
 * @s1: A pointer to the first string
 * @s2: Apointer to the second string
 * Return: If str1 < str2, The negative difference of the characters */

int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}
