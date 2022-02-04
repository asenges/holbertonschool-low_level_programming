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

for (n = 0; n < 10; n++)
{
putchar(n + '0');
if (n == 9)
break;

putchar(',');
putchar(' ');
}

putchar('\n');
return (0);

}
