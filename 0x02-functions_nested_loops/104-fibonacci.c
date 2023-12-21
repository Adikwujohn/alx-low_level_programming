#include <stdio.h>

/**
 * Prints the first 98 Fibonacci numbers, starting with 1 and 2, separated by commas and followed by a new line.
 * Returns: Always 0 (success)
 */
int main()
{
int a = 1, b = 2, count = 0;
while (count < 98)
{
int next = a + b;
printf("%d", next);
if (count != 97)
{
printf(", ");
}
a = b;
b = next;
count++;
}
printf("\n");
return 0;
}
