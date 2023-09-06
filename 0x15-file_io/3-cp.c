#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int file_descriptors);

/**
 * create_buffer - 1024 bytes for a buffer
 * @file_name: The name of the file buffer
 *
 * Return: 0
 */
char *create_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * close_file - the file descriptors to be closed
 * @fd: closes The file descriptor
 */
void close_file(int file_descriptor)
{
	int o;

	o = close(file_descriptor);

	if (o == -1)
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
	int file_from, file_to, read, write;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buff(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	read = read(file_from, buff, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_from == -1 || read == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		write = write(file_to, buff, read);
		if (file_to == -1 || write == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		read = read(file_from, buff, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (read > 0);

	free(buff);
	close_file(file_from);
	close_file(file_to);

	return (0);
}
