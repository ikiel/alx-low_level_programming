#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		*argv[0] = *argv[1];
	}

	return (0);
}
