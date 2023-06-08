/*
** EPITECH PROJECT, 2022
** loki
** File description:
** str_concat
*/

#include "my.h"

char *str_concat(char *dest , char const *src)
{
    int i = 0;
    int l = str_len(dest);

    if (!src)
        return dest;
    while (src[i] != '\0') {
        dest[l + i] = src [i];
        i++;
    }
    dest[(l + i)] = '\0';
    return dest;
}
