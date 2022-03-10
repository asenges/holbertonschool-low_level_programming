#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - variadic function
 * Return: int
 * @n: const unsigned int
 * @...: varargs
 *
 * Description:
 * Author: Alex Senges
 * Date: Mar 09, 2022
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);

	va_start(ap, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
