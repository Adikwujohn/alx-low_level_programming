#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - prints a character in reverse using recursion.
 * @s: The character to be printed.
 * @*s: address of the pointer to be printed.
 * return: on success 0.
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
{
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
}
