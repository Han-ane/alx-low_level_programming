#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: the name of the file
 * @text_content: terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, written, lenght = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenght = 0; text_content[lenght];)
			lenght++;
	}
	i = open(filename, O_WRONLY | O_APPEND);
	written = write(o, text_content, lenght);

	if (i == -1 || written == -1)
		return (-1);

	close(i);

	return (1);
}
