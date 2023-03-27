/*
** EPITECH PROJECT, 2022
** my_revstr.c
** File description:
** reverse the string
*/

#include "my.h"

char *str_rev(char *str)
{
    int i = 0;
    int lenght = str_len(str);
    char *temp = mem_calloc((lenght + 1), sizeof(char));

    while (lenght)
        temp[i++] = str[--lenght];
    free(str);
    return temp;
}
