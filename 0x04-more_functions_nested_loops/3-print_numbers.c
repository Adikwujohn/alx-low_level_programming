#include "main.h"
#include <stdio.h>
/* Declaration of _putchar function */
int _putchar(char c);

/**
 * print_numbers - print numbers from 0 to 9
 *
 * Return: Always 0
 */

void print_numbers(void)
{
char c;
for (c = '0'; c <= '9'; c++)
{
_putchar(c);
}
_putchar('\n');
}
