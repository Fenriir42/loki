/*
** EPITECH PROJECT, 2022
** loki
** File description:
** str_get_between.c
*/

#include "my.h"

char *str_get_between (char *string, char *start, char *end)
{
    char *result;
    char *tmp;

    if (!string || !start || !end)
        return (NULL);
    tmp = strstr(string, start);
    if (!tmp)
        return (NULL);
    tmp += strlen(start);
    result = strndup(tmp, strstr(tmp, end) - tmp);
    return (result);
}
