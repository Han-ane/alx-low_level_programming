#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- reads a text file and prints i
 * @filename: the file being read
 * @letters: the number of letters should read
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t descriptor;
	ssize_t written;
	ssize_t text;

	descriptor = open(filename, O_RDONLY);
	if (descriptor == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	text = read(descriptor, buffer, letters);
	written = write(STDOUT_FILENO, buffer, text);

	free(buffer);
	close(descriptor);
	return (written);
}
