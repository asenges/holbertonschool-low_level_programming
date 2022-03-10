#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - variadic function
 * Return: void
 * @separator: const char
 * @n: const unsigned int
 * @...: varargs
 *
 * Description:
 * Author: Alex Senges
 * Date: Mar 09, 2022
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (n != 0 && separator != NULL)
	{
		va_start(ap, n);

		for (i = 0; i < n; i++)
			printf("%d%s", va_arg(ap, int), separator);

		printf("\n");
		va_end(ap);
	}
}

