#include <stdio.h>
#include <stdlib.h>

void print_opcodes(char *addr, int size);

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments passed to the function
 * @argv: array of pointers to arguments
 *
 * Return: always O
 */
int main(int argc, char *argv[])
{
    int size;

    if (argc != 2) {
        printf("Error\n");
        return 1;
    }

    size = atoi(argv[1]);
    if (size < 0) {
        printf("Error\n");
        return 2;
    }

    print_opcodes((char *)&main, size);
    return 0;
}

/**
 * print_opcodes - print the opcodes of this program
 * @addr: address of the main function
 * @size: number of bytes to print
 *
 * Return: void
 */

void print_opcodes(char *addr, int size)
{
    int i;
    unsigned char *p = (unsigned char *)addr;

    for (i = 0; i < size; i++) {
        printf("%02x", *(p + i));
    }
    printf("\n");
}

