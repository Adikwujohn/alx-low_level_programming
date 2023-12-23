#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks if a character is an uppercase or a lowercase.
 * @c: is the character to be checked.
 * Return: Always 1 for uppercase and zero for lowercase
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
/* uppercase character */
}
else
{
return (0);
/* not uppercase character */
}
}
