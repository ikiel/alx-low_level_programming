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

for (a = 48; a < 58; a++)
{
for (b = 48; b < 58; b++)
{
if (b != a)
{
putchar(a);
putchar(b);
}
else
{
continue;
}
putchar(',');
putchar(' ');
}
}
putchar('\n');

return (0);
}
