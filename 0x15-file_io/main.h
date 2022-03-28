#ifndef MAINH
#define MAINH

#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stddef.h>

ssize_t read_textfile(const char *filename, size_t letters);
int _putchar(char c);

#endif
