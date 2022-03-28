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
	char *buf = NULL;
	ssize_t rres = 0;
	ssize_t wres = 0;

	buf = malloc(letters);
	if (!buf)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	rres = read(fd, buf, letters);
	if (fd == -1 || rres == -1)
		return (0);

	wres = write(STDIN_FILENO, buf, rres);
	if (wres == -1 || rres != wres)
		return (0);

	close(fd);
	free(buf);
	return (wres);
}
