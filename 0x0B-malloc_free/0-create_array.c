#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - a function that creates an array.
 * @size: size of array.
 * @c: character.
 * Return: whichever array is filled in.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *A;

	if (size == 0)
	return (NULL);
	A = malloc(size * sizeof(char));
if (A == NULL)
return (NULL);

	for (i = 0; i < size; i++)
{
	A[i] = c;
}
return (A);
}
