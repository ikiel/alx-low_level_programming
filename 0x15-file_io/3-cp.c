#include "main.h"
#define BUF_SIZE 1024

/**
 * main - copies the content of a file to another
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 for success, exit_code on failure
 */
int main(int argc, char **argv)
{
	int fd_src, fd_dest, bytes_read, bytes_write;
	char buffer[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_src = open(argv[1], O_RDONLY);
	error_98(fd_src, argv[1]);

	fd_dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	error_99(fd_dest, argv[2]);

	while ((bytes_read = read(fd_src, buffer, BUF_SIZE)) > 0)
	{
		bytes_write = write(fd_dest, buffer, bytes_read);
		error_99(bytes_write, argv[2]);
	}

	error_98(bytes_read, argv[1]);

	if (close(fd_src) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_src);
		exit(100);
	}
	if (close(fd_dest) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_dest);
		exit(100);
	}

	return (0);
}

/**
 * error_98 - checks for error 98
 * @fd: the value to check
 * @argv: argument
 */
void error_98(int fd, char *argv)
{
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv);
		exit(98);
	}
}

/**
 * error_99 - checks error 99
 * @fd: value to check
 * @argv: argument
 */
void error_99(int fd, char *argv)
{
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv);
		exit(99);
	}
}
