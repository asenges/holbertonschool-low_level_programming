#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *  main - main
 *  Return: 0
 *
 *  Description:
 *
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("is positive");
}
else if (n == 0)
{
printf("is zero");
}
else
{
printf("is negative");
}

return (0);
}
