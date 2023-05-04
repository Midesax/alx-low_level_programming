#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: Stores the string copy
 * @src: Source string
 * @n: Number of bytes to be copied
 * Return: A pointer to the resulting string Dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i = 0, src_len = 0;
while (src[i++])
src_len++;
for (i = 0; src[i] && i < n; i++)
dest[i] = src[i];
for (i = src_len; i < n; i++)
dest[i] = '\0';

return (dest);
}
