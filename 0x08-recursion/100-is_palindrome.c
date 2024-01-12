#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * is_palindrome - a function that returns 1 if a string is palindrome.
 * @i: an integer.
 * @s: a variable .
 * @*s: pointer to variable s.
 * return: returns 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{	
	int length = strlen(s);
	int i;

	for (i = 0; i < length / 2; i++)
{
	if (s[i] != s[length - 1 - i])
{
	return (0);
}
}
return (1);
}
