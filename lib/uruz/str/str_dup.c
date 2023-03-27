/*
** EPITECH PROJECT, 2022
** Lib
** File description:
** str_dup
*/

#include "my.h"

char *str_dup(char const *src)
{
    int len = str_len(src);
    char *ptr = mem_calloc((len + 1), sizeof(char));
    for (int i = 0 ; src[i] != '\0' ; i++)
        ptr[i] = src [i];
    return ptr;
}
