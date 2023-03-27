/*
** EPITECH PROJECT, 2022
** Lib
** File description:
** return a pointer of the sub-string
*/

#include "my.h"

char *str_find_str(char *str, char const *to_find)
{
    int j = 0;
    int start = 0;
    char *ptr = str;
    int length = str_len(to_find);

    for (int i = 0; str[i]; i++) {
        if (str[i] == to_find[j]) {
            start = (i - length + 1);
            j++;
        }
    }
    if (length == 1)
        return str;
    if (start == 0)
        return NULL;
    ptr = &str[start];
    return ptr;
}
