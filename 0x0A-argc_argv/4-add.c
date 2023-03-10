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

		i = 1;

		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]))
			{
				i += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}

		}

		printf("%d\n", i);
		return (0);

	}
	else
	{
		printf("0\n");

		return (0);
	}
}
