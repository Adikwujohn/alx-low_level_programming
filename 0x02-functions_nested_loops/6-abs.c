#include <stdio.h>
#include "main.h"
/**
 * _abs - computes the absolute value of a number.
 * @c: The number to calculate the absolute value of.
 *
 * Return Absolute value of the input number 'num'
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
