#include <stdio.h>
#include <stdlib.h>

/**
 * main - check for change
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 1 for error, 0 for success
 */

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int i;
		int j;
		int divide[] = {25, 10, 5, 2};
		int index;

		i = atoi(argv[1]);
		j = 0;
		index = 0;

		if (i < 0)
		{
			printf("0\n");
			return (0);
		}
		for (index = 0; index < 4; index++)
		{
			if (i >= divide[index])
			{
				j += i / divide[index];
				i = i % divide[index];
			}
		}
		if (i == 1)
		{
			j += 1;
		}
		printf("%d\n", j);
		return (0);
	}
}
