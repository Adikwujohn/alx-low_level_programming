#include <stdio.h>
#include "main.h"
/**
 * _abs - computes the absolute value of a number.
 * @num: The number to be check.
 *
 * Return Absolute value of a number or zero
 */
int _abs(int c)
{
if (c < 0)
{
int abs_val;
abs_val = c* -1;
return (abs_val);
}
return (c);
}
