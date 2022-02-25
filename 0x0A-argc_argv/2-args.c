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
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
