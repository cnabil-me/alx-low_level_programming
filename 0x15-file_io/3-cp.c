#include "main.h"
/**
 * main - entry point
 * @argv: arguments
 * @argc: arguments count
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t nchars, nwr;
	char buf[BUFFER_SIZE];

	if (argc != 3)

		exit(97), dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	check_errors(file_from, file_to, argv);

	nchars = BUFFER_SIZE;
	while (nchars == BUFFER_SIZE)
	{
		nchars = read(file_from, buf, BUFFER_SIZE);
		if (nchars == -1)
			check_errors(-1, 0, argv);
		nwr = write(file_to, buf, nchars);
		if (nwr == -1)
			check_errors(0, -1, argv);
	}

	err_close = close(file_from);
	if (err_close == -1)

		exit(100), dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);

	err_close = close(file_to);
	if (err_close == -1)

		exit(100), dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);

	return (0);
}

/**
 * check_errors - check and display Errors
 * @file_from: file from
 * @file_to: file to
 * @argv: arguments
 * Return: void
 */
void check_errors(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
		exit(98), dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	if (file_to == -1)
		exit(99), dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
}
