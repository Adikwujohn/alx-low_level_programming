#include <stdio.h>
#include "main.h"

/**
 * factorial - gives the factorial of a given number.
 * @n: is the given number.
 * return: the factorials of integer n.
 */
int factorial(int n)
{
	if (n < 0)
{
	return (-1);
	/*when the factorial is negative.*/
}
	else if (n == 1)
{
	return (1);
	/* for the factorial of one*/
}
	else
	return (n * factorial(n - 1));
}
