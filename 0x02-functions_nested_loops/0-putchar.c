#include <stdio.h>
#include <unistd.h>
#include "main.h"

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
	int i = 0;

	for (; i < 9; i++)
	{
		_putchar(word[i]);
	}

	return (0);

}
