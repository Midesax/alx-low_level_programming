#include "main.h"

/**
* _abs - Computes the absolute value of a an integer
* @c: The integer to be computed
* Return: The absolute value or 0
*/

int _abs(int c)
{
if (c < 0)
{
int abs_val;
abs_val = c * -1;
return (abs_val);
}
return (c);
}
