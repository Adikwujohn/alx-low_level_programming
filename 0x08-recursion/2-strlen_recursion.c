#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - returns the string length of giving string.
 * @s: is the string constant.
 * @*s: is the pointer to the string.
 * return: 0 if string is empty otherwise return length of string.
 * return value of _strlen_recursion - is length of string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
{
	return (0);
}
	else
{
	return (1 + _strlen_recursion(s + 1));
}
}

