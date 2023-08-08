#include "main.h"
/**
 * create_file - creates a file with content
 * @filename: file name to create
 * @text_content: content to be written
 * Return: 1 on success ||  -1 on fails
 */
int create_file(const char *filename, char *text_content)
{
	int f_d;
	int letters_count;
	int r_write;

	if (!filename)
		return (-1);

	f_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (f_d == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (letters_count = 0; text_content[letters_count]; letters_count++)
		;

	r_write = write(f_d, text_content, letters_count);

	if (r_write == -1)
		return (-1);

	close(f_d);

	return (1);
}
