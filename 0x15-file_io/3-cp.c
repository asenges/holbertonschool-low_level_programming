#include "main.h"
/**
 * _close - close function
 * @fd: as a file handler
 * Return: void
 */
void _close(int fd)
{
	int res = 0;

	res = close(fd);
	if (res == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copy file to another
 * @argc: arguments
 * @argv: files
 * Return: int
 */
int main(int argc, char *argv[])
{
	static char buf[1024];
	int sf = 0, sd = 0, flen = 1024, dlen = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	sf = open(argv[1], O_RDONLY);
	if (sf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	sd = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	if (sd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (flen == 1024)
	{
		flen = read(sf, buf, 1024);
		if (flen == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		dlen = write(sd, buf, flen);
		if (dlen == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	_close(sf);
	_close(sd);
	return (0);
}
