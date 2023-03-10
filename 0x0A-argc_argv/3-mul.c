#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 for success, 1 for error
 */

int main(int argc, char *argv[])
{
	if (argc > 1 && argc < 3)
	{
		int i;
		int j;

		i = atoi(argv[1]);
		j = atoi(argv[2]);

		printf("%d\n", i * j);

		return (0);
	}
	else
	{
		printf("Error\n");

		return (1);
	}
}
