#include "main.h"
/**
 * append_text_to_file - append text to file
 * @filename: file name
 * @text_content: text to append
 * Return: 1 on success ||  -1 on fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f_d, letters_count, r_write;

	if (!filename)
		return (-1);

	f_d = open(filename, O_WRONLY | O_APPEND);

	if (f_d == -1)
		return (-1);

	if (text_content)
	{
		for (letters_count = 0; text_content[letters_count]; letters_count++)
			;

		r_write = write(f_d, text_content, letters_count);

		if (r_write == -1)
			return (-1);
	}

	close(f_d);

	return (1);
}
