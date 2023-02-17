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

a = 97;
while (a < 123)
{
putchar(a);
++a;
}

b = 65;
while (b < 91)
{
putchar(b);
++b;
}

putchar('\n');

return (0);
}
