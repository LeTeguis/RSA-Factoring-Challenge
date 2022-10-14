#ifndef FACTORS_H
#define FACTORS_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <stdint.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>

#if !(defined SSIZE_MAX)
#define SSIZE_MAX (SIZE_MAX >> 1)
#endif

typedef int uli;
typedef unsigned long Ullong;

uli diviseur1(uli n);

ssize_t _getline(int fd, char **linestr, size_t *n);

#endif
