#include <stdio.h>
/**
 * code: prints the first 98 fibonacci numbers, starting with 1 and 2, followed by a new line
 * Return: always 0 (success)
 */
void print_fibonacci()
{
int a = 1, b = 2, count = 0;
while (count < 98)
{
int next = a+b;
printf("%d", next);
if (count != 98)
printf(",");
}
a = b;
b = next;
count++;
}
printf("\n");
}
int main()
{
print_fibonacci();
return (0);
}
