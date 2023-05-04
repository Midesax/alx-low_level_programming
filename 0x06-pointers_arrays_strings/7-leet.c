#include "main.h"

/**
* leet - encodes a string into 1337
* @str: The string to be considered
* @i: Integer variable for loop
* @j: Integer variable for loop
* Return: The encoded string
*/

char *leet(char *str)
{
int i, j;
char s1[] = "44337711";
char s2[] = "AEOTLaeotl";
    
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (str[i] == s2[j])
{
str[i] = s1[j];
}
}
}
return (str);
}
