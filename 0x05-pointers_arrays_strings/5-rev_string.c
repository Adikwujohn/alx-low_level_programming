#include "main.h"
#include <stdio.h>
/*
 *rev_string:- reverses a string.
 *@s - string to be reversed.
 *return: 0.
 */

void rev_string(char *s)
{
if (*s == '\0')
{
return;
}
rev_string(s + 1);
putchar(*s);
}
