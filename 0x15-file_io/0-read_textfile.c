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

	if (filename == NULL){
		free(buf);
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1){
		free(buf);
		return (0);
	}

	rres = read(fd, buf, letters);
	if (rres == -1){
		close(fd);
		free(buf);
		return (0);
	}

	wres = write(STDIN_FILENO, buf, rres);
	if (wres == -1 || rres != wres){
		close(fd);
		free(buf);
		return (0);
	}

	close(fd);
	free(buf);
	return (wres);
}
