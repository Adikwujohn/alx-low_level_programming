#include <stdio.h>
#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: the number to print in binary.
 */
void print_binary(unsigned long int n)
{
	int shift = sizeof(unsigned long int) * 8 - 1;
	int flag = 0;

	while (shift >= 0)
{
	unsigned long int bit = n >> shift;

	if (bit & 1)
{
	_putchar ('1');
	flag = 1;
}
	else if (flag)
{
	_putchar ('0');
}
shift--;
}
if (!flag)
{
	_putchar ('0');
}
}
