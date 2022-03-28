#include "main.h"

/**
 * read_textfile - read_textfile
 * @filename: const char*
 * @letters: size_t
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *fptr = NULL;
	ssize_t res = 0;
	ssize_t wret = 0;

	fptr = malloc(letters);
	if (!fptr)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	res = read(fd, fptr, letters);
	if (!fd || !res)
		return (0);

	wret = write(STDIN_FILENO, fptr, res);
	if (res != wret)
		return (0);

	return (res);
}
