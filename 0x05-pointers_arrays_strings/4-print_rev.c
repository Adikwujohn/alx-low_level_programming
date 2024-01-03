#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints a string in reverse.
 * @s: pointer to the string to be printed
 * This function prints the string in reverse recursively.
 */
void print_rev(char *s)
{
if (*s == '\0')
{
return;
}
else
{
print_rev(s + 1);
_putchar(*s);
}
}
