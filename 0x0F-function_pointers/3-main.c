#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"


/**
 * main - check the code
 * Return: Always 0.
 * @argc: int
 * @argv: char
 *
 * Description:
 * Author: Alex Senges
 * Date: 9, Mar 2022
 */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*'
			&& argv[2][0] != '/' && argv[2][0] != '%') || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] != '/' || argv[2][0] != '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3])));
	return (0);
}

