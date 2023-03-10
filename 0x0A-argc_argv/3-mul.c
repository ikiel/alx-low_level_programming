#include <stdio.h>

/**
 * main - multiply two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 for success, 1 for error
 */

int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		int i;

		i = *argv[1] * *argv[2];
		printf("%d\n", i);

		return (0);
	}
	else
	{
		printf("Error\n");

		return (1);
	}
}
