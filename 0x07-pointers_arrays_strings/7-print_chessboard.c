#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: number of rows
 */

void print_chessboard(char (*a)[8])
{
	int count;
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
			if (j == 7)
				_putchar('\n');
		}
	}
}
