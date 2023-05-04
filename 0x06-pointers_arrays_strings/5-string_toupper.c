#include "main.h"

/**
 * string_toupper - changes all lowercase letters to upper
 * @str: The string to be considered
 * Return: A pointer to the changed string
 */

char *string_toupper(char *)
{
int i = 0;
while (str[i])
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] -= 32;
i++;
}
return (str);
}
