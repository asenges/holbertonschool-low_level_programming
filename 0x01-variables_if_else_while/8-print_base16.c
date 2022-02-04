#include <stdio.h>

/**
 * main - main
 * Return: 0
 *
 * Description:
 *
 */

int main(void)
{

int n = 0;
char l = 'a';

for (n = 0; n < 10; n++)
putchar(n + '0');

for (l = 'a'; l <= 'f'; l++)
putchar(l);

putchar('\n');
return (0);

}
