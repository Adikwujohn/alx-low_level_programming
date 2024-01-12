#include "main.h"
#include <stdio.h>
/**
 * _isdigit  - checks for a digit 0 to 9.
 * @c: is the number to check.
 * Return: Always 0.
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
/*digit*/
}
else
{
return (0);
/* not a digit */
}
}
