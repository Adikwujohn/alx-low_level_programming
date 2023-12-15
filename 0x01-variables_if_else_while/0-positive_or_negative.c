#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - determines if a random number is positive, negative, or zero
 * Return: 0 on success
 */
int main(void)
{
   int n = rand() % RAND_MAX - RAND_MAX / 2;
   srand(time(0));
    printf("%d is ", n);

    if (n > 0)
    {
        printf("%s\n", "positive");
    }
    else if (n < 0)
    {
        printf("%s\n", "negative");
    }
    else
    {
        printf("%s\n", "zero");
    }

    printf("\n");
    return 0;
}

