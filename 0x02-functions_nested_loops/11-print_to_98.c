#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: The number to start printing from.
 * prints numbers separated by a comma followed by a space from n to 98.
 *
 * in ascending or descending order,followed by a new line.
 */
void print_to_98(int n)
{
while (n != 98)
{
printf("%d, ", n);
if (n > 98)
{
n--;
}
else
{
n++;
}
}
printf("%d\n", n);
/**
 * prints the last number(98) with a new line
 */
}
