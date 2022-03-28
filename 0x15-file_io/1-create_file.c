#include "main.h"
/**
 * create_file - read_textfile
 * @filename: const char*
 * @text_content: char ptr
 * Return: int -1 on error or 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int fd, n, wres;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	n = strlen(text_content);
	wres = write(fd, text_content, n);
	if (wres == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
