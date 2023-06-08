/*
** EPITECH PROJECT, 2022
** loki
** File description:
** str_index_of
*/

#include "my.h"

int str_index_of(char const *str, char to_find)
{
    if (str == NULL)
        return -1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == to_find)
            return i;
    }
    return -1;
}
