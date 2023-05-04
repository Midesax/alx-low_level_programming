#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: The string to be considered
 * @i: Integer variable for loop
 * @j: Integer variable for loop
 * Return: the encoded string
 */
char *leet(char *str)
{
int i, j, len;
char leet_char[] = "44337711";
char leet_letter[] = "AEOTLaeotl";
char encoded_str[100];
len = 0;
while (str[len] != '\0' && len < 99)
len++;

for (i = 0; i < len; i++)
{
for (j = 0; j < 11; j++)
{
if (str[i] == leet_letter[j])
{
encoded_str[i] = leet_char[j];
break;
}
else
{
encoded_str[i] = str[i];
}
}
}
encoded_str[i] = '\0';
return strdup(encoded_str);
}
