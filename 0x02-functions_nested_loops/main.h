#ifndef MAIN_H
#define MAIN_H
int _putchar(char c);

/**
 * print_alphabet - A function that prints the alphabet in lowercase
 */

void print_alphabet(void)
{
int i;
for (i = 97; i <= 122; i++)
{
_putchar(i);
}
_putchar('\n');
}

#endif
