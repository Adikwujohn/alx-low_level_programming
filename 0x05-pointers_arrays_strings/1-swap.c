#include <stdio.h>
#include "main.h"
/**
 * swap_int - takes two integer variables and swaps their value.
 *
 * @a: swaps and then stores the address of b.
 * @b: swaps and then stores the address of a.
 * return: 0
 */
void swap_int(int *a, int *b)
{
int change;
change = *b;
*b = *a;
*a = change;
}
