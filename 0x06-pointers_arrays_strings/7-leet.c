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
int i, j;
char leet_char[] = "44337711";
char leet_letter[] = "AEOTLaeotl";
char s[100];

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 9; j++)
{
if (str[i] == leet_letter[j])
{
s[i] = leet_char[j];
break;
}
else
{
s[i] = str[i];
}
}
}
s[i] = '\0';
    
return (s);
}
