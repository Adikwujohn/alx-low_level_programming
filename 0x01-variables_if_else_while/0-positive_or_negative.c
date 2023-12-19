#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/** main - determines if a number is positive,negative,or zero 
*Return: 0 on success*/
int main(void) 
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/*Removed "your code goes there" comment*/
printf("%d is ", n);
if (n>0) 
{
printf("positive");
} 
else if (n<0) 
{
printf("negative");
} 
else 
{
printf("zero");
}
printf("\n");
return 0;
}
