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
	ssize_t res;

	fptr = malloc(letters); 
	if (!fptr)
		return (0);

	if (!filename)
		return (0);
	
	fd = open(filename, O_RDONLY);
	res = read(fd, fptr, letters);
	write(STDIN_FILENO, fptr, res);
	return (res);
}
