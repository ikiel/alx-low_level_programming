#include <stdio.h>

/**
 *main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
a = 97;
while (a < 123)
{
if (a != 113 && a != 101)
{
putchar(a);
}
++a;
}

putchar('\n');

return (0);
}
