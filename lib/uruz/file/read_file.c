/*
** EPITECH PROJECT, 2022
** loki
** File description:
** read_file.c
*/

#include "my.h"

static int file_size(const char* path)
{
    struct stat info_file;
    int map_size;
    stat(path, &info_file);
    map_size = info_file.st_size;
    return map_size;
}

char *read_file(char const *filepath)
{
    char *buffer = NULL;
    int fd = open(filepath, O_RDONLY);
    int size = file_size(filepath);

    if (fd == -1)
        return NULL;
    buffer = malloc(sizeof(char) * (size + 1));
    if (!buffer)
        return NULL;
    if (read(fd, buffer, size) == -1)
        return NULL;
    buffer[size] = '\0';
    close(fd);
    return buffer;
}
