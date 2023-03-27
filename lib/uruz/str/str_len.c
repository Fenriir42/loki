/*
** EPITECH PROJECT, 2022
** Lib
** File description:
** str_len
*/

#include "uruz/uruz.h"

int str_len(char const *str)
{
    int i = 0;

    if (!str)
        return 0;
    for (; str[i]; i++);
    return i;
}
