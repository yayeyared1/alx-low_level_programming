#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -> assign to the variable n each time it is excuted and prints out
 * based a condition
 * Return : always 0
 * Return: something
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is ", n);
if (n > 5)
{
printf("greater than 5");
}
if (n == 0)
{
printf("0");
}
if (n < 6 && n != 0)
{
printf("less than 6 not 0");
}
printf("\n");
return (0);
}
