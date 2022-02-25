#include <stdlib.h>
#include "main.h"
#include <ctype.h>

/**
 * main - check the code
 * @argc: int
 * @argv: char
 *
 * Description:
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (-1);
	}
	else
	{
		for (; i < argc; i++)
		{
			if (*argv[i] != '0' && atoi(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
		return (0);
	}
}
