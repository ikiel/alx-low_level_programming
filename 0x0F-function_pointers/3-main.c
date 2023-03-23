#include "3-calc.h"

/**
 * main - perform simple operations
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 for success, 98, 99 ,100 for error
 */

int main(int argc, char **argv)
{
	int a, b;
	int (*result)(int, int);

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = get_op_func(argv[2]);
	printf("%d\n", result(a, b));

	return (0);
}
