#include "main.h"

/**
 * create_file - Creates a fil
 * @filename: the name of the file to create
 * @text_content: terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int descriptor, written, lenght = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenght = 0; text_content[lenght];)
			lenght++;
	}

	descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	written = write(descriptor, text_content, lenght);

	if (descriptor == -1 || written == -1)
		return (-1);

	close(descriptor);

	return (1);
}
