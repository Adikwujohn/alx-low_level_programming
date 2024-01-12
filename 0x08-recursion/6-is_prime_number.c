#include <stdio.h>
#include "main.h"
/**
 * is_prime_number - check if the input integer is a prime number.
 * @n: variable that is under test.
 * return: prime number otherwise return 0.
 */
int is_prime_number(int n)
{
	if (n < 2)
{
	return (0);
}
for (int i = 2; i * i <= n; ++i)
{
	if (n % i == 0)
{
	return (0);
}
}
return (1);
}
