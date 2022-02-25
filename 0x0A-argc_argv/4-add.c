#include <stdlib.h>
#include "main.h"

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
	if (argc != 3)
	{
		printf("0\n");
		return (-1);
	}
	else
	{

		if (atoi(argv[1]) < 0 || atoi(argv[2]) < 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			printf("%d\n", atoi(argv[1]) + atoi(argv[2]));
			return (0);
		}
	}
}
