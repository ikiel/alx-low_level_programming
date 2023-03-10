#include <stdio.h>
#include <stdlib.h>

/**
 * main - add integers
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
		int n;
		int sum;
		char *flag;

		for (i = 1; argv[i] < argv[argc]; i++)
		{
			n = strtol(argv[i], &flag, 10);
			if (*flag)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += n;
			}
		}

		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("0\n");

		return (0);
	}
}
