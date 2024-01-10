#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints a string to stdout using recursion.
 * @s: is the string .
 * @*s is the address of the string.
 * return - always 0.
 */

void _puts_recursion(char *s)
{
	if (*s)
{
	_putchar(*s);
	_puts_recursion(s + 1);
}
else
_putchar('\n');
}
