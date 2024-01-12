#include <stdio.h>
#include "main.h"

/**
 * _strlen - gives the length of a string.
 * @s - string to be checked.
 * return - string_length.
 */
int _strlen(char *s)

{

int string_length = 0;
while (s[string_length])
string_length++;
return (string_length);

}
