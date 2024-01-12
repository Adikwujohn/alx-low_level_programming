#include <stdio.h>
#include "main.h"
/**
 * wildcmp - compares two strings.
 * @*s1: address of string s1.
 * @s1: string s1.
 * @*s2: address of string s2.
 * @s2: string s2.
 * return : 1 if the strings can be considered identical, otherwise return 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	return ((*s1 && wildcmp(s1 + 1, s2)) || wildcmp(s1, s2 + 1));
	return ((*s1 == *s2) && (*s1 ? wildcmp(s1 + 1, s2 + 1) : 1));
}
