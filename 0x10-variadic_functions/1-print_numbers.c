#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
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

	if (separator != NULL && separator[0] != '\0')
	{
		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ap, int));
			if (i < n - 1)
				printf("%s", separator);
		}
		va_end(ap);
		printf("\n");
	}
}

