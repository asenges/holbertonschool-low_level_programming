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

char ch = 'a';
char sp = '\n';

for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
}

putchar(sp);
return (0);

}
