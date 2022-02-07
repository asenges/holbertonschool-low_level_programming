#include <stdio.h>
#include <unistd.h>
#include "_putchar.c"


/**
 * main - Prints _putchar
 * Return: 0
 *
 * Description:
 * Author: Alex Senges
 *
 */

int main(void)
{

	char word[9] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n'};
	int i;

	for (i = 0; i < sizeof(word); i++)
	{
		_putchar(word[i]);
	}

	return (0);

}
