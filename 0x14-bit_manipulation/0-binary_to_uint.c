#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - binary_to_uint
 * @b: const char*
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		num = num << 1;
		num = num + b[i] - 48;
		i++;
	}
	return (num);
}
