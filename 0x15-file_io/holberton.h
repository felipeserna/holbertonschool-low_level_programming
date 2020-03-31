#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#define BSIZE 1024

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
#endif /* HOLBERTON_H */
