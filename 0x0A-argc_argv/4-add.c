#include <stdlib.h>
#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * main - check the code
 * @argc: int
 * @argv: char
 *
 * Description:
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i = 1;
	size_t j;
	int sum = 0;

	for (; i < argc; i++)
	{
		for (j = 0; (argv[i][j]); j++)
		{
			if ((argv[i][j]) < 48 || (argv[i][j]) > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	
	return (0);
}

