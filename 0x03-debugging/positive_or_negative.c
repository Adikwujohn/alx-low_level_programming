#include "main.h"
/**
 * main - determines if a given number is positive,negative or zero.
 * @i: is the number to be checked
 * Return: 0 on (success)
 */
void positive_or_negative(int i)
{
	if (i < 0)
{
	printf("%d is negative\n", i );
}
	else if (i > 0)
{
	printf("%d is positive\n", i);
}
        else
{
	printf("%d is zero\n", i);
}
        return;
}
