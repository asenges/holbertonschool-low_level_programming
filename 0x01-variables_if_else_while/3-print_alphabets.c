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

char ch_lo = 'a';
char ch_up = 'A';
char sp = '\n';

for (ch_lo = 'a'; ch_lo <= 'z'; ch_lo++)
putchar(ch_lo);

for (ch_up = 'A'; ch_up <= 'Z'; ch_up++)
putchar(ch_up);

putchar(sp);
return (0);

}
