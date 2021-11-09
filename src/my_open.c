/*
** EPITECH PROJECT, 2021
** bsq
** File description:
** open_read
*/

#include "my.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

char **my_open_read(char *str)
{
    struct stat sb;
    int fd = open(str, O_RDONLY);
    char *buf;
    int red;
    char **array;
    char c = '\n';
    int i = 0;

    if (fd == -1 || stat(str, &sb) == -1)
        exit(84);
    buf = malloc(sizeof(char) * sb.st_size);
    red = read(fd, buf, sb.st_size);
    if (red == -1)
        exit(84);
    if (buf == NULL)
        exit(84);
    buf[sb.st_size] = '\0';
    array = my_str_to_array(buf, c);
    if (array[0] == NULL)
        exit(84);
    close(fd);
    return array;
}
