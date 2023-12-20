#include "main.h"
/**
 * _islower -checks is a characterc is lowercase
 * @c: The character to be checked
 *
 * Return: 1 if c is lowercase,other wise 0
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return 1;
}
else
{
return 0;
}
}
