#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - function ti test results
 * Return: 0
 * @n:
 *
 * description: the number stored in the variable n is positive or negative.
 *
 */

void positive_or_negative(int n)
{
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);

	if (n == 0)
		printf("%d is zero\n", n);

	else if (n < 0)
		printf("%d is negative\n", n);

}
