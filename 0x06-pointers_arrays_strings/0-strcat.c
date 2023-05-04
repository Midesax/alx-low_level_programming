#include <stdio.h>
#include "main.h"

/**
 * _strcat - Concatenate two strings
 * @dest: The final string
 * @src: The source string
 * Return: A pointer to the string dest
 */

char *_strcat(char *dest, char *src)
{
int dlen = 0, i;
while (dest[dlen])
{
dlen++;
}
for (i=0; src[i] != 0; i++)
{
dest[dlen] = src[i];
dlen++;
}
dest[dlen] = '\0';

return(dest);
}
