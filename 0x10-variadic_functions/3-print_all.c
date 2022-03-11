#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_all - variadic function
 * Return: void
 * @format: const char * const
 * @...: varargs
 *
 * Description:
 * Author: Alex Senges
 * Date: Mar 09, 2022
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i;

	if ((separator == NULL && separator[0] == '\0') || n <= 0)
	{
		printf("\n");
		exit(0);
	}

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (va_arg(ap, char*) == NULL)
		{
			printf("nil\n");
			exit(0);
		}
		else
		{
			printf("%s", va_arg(ap, char*));
			if (i < n - 1)
				printf("%s", separator);
		}
	}
	va_end(ap);

	printf("\n");
}

