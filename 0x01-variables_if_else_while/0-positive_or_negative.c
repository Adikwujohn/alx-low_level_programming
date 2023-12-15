#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - determines if a random number is positive, negative, or zero
 * Return: 0 on success
 */
int main(void)
{
   int n = rand() % (2*(long int) RAND_MAX +1) - (long int)RAND_MAX;
   srand(time(0));
    printf("%d is ", n);

    if (n > 0)
    {
        printf("%d is positive\n", n);
    }
    else if (n < 0)
    {
        printf("%d is negative\n", n);
    }
    else
    {
        printf("%d is zero\n", n);
    }

    printf("\n");
    return 0;
}

