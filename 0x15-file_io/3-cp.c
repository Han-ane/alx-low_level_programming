#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for a buffer
 * @file: The name of the file buffer is storing
 *
 * Return: pointer to the newly-allocated
 */
char *create_buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buf);
}

/**
 * close_file - Close the file descriptors
 * @fd: The file descriptor be closed
 */
void close_file(int file_descriptor)
{
	int i;

	i = close(file_descriptor);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file_descriptor %d\n", file_descriptor);
		exit(100);
	}
}
/**
 * main - Copies the contents of a file to another file
 * @argc: The number of arguments
 * @argv: array of pointers to the arguments
 *
 * Return: 0
 *
 * Description: if argument is not the correct one - exit with code 97
 * If file_from does not exist or if you can not read it - exit code 98
 * If file_to can not create or if write to file_to fails - exit code 99
 * If file_to or file_from can not close a file descripto - exit code 100
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, r, written;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		written = write(file_to, buffer, r);
		if (file_to == -1 || written == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(file_from, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (read > 0);

	free(buffer);
	close_file(file_from);
	close_file(file_to);

	return (0);
}
