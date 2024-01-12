#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * is_palindrome_recursive - checks if a string is a palindrome recursively
 * @s: input string
 * @start: starting index
 * @end: ending index
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome_recursive(char *s, int start, int end)
{
    if (start >= end)
    {
        return 1;
    }

    return is_palindrome_recursive(s, start + 1, end - 1);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: input string
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
    int length = strlen(s);
    return is_palindrome_recursive(s, 0, length - 1);

}
