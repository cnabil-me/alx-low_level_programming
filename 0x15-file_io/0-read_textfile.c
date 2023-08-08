#include "main.h"
/**
 * read_textfile - reads text file
 * @filename: file to read
 * @letters: N letters to be printed
 * Return: count of printed letters . 0 on fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f_d;
	ssize_t n_writed;
	ssize_t n_readed;
	char *Buffer;

	if (!filename)
		return (0);

	f_d = open(filename, O_RDONLY);

	if (f_d == -1)
		return (0);

	Buffer = malloc(sizeof(char) * (letters));

	if (!Buffer)
		return (0);

	n_readed = read(f_d, Buffer, letters);
	n_writed = write(STDOUT_FILENO, Buffer, n_readed);

	close(f_d);
	free(Buffer);

	return (n_writed);
}
