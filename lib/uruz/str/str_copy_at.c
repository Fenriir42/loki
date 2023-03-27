/*
** EPITECH PROJECT, 2022
** Lib
** File description:
** str_copy_at
*/

#include "my.h"

char *str_copy_at(char const *str, size_t start, size_t end)
{
    char *new_str = mem_calloc((end - start + 1), sizeof(char));
    size_t i = 0;

    for (; str[i] != '\0' && (i + start) < end; i++)
        new_str[i] = str[start + i];
    return new_str;
}
