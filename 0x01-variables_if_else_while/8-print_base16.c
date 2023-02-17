#include <stdio.h>

/**
 *main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
int b;

a = 48;
while (a < 58)
{
putchar(a);
++a;
}

b = 97;
while (b < 103)
{
putchar(b);
++b;
}

putchar('\n');

return (0);
}
