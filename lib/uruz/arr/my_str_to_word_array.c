/*
** EPITECH PROJECT, 2022
** my_str_to_word_array
** File description:
** my_str_to_word_array
*/

#include <string.h>
#include "my.h"

static int nb_return_scanner(char *str)
{
    int x = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            x++;
        }
    }
    return x;
}

static int search_index(char *str)
{
    int x = 0;

    while (str[x] != '\0') {
        if (str[x] == '\n') {
            return x;
        }
        x++;
    }
    return -1;
}

static char *my_ndup(char *str, int n)
{
    int i = 0;
    char *dup = malloc(sizeof(char) * (n + 1));

    while (i != n && str[i] != '\0') {
        dup[i] = str[i];
        i++;
    }
    dup[i] = '\0';
    return dup;
}

char **my_str_to_word_array(char *str)
{
    int a = nb_return_scanner(str);
    int index = 0;
    int k;
    int x = 0;
    char **arr = malloc(sizeof(char *) * (a + 1));

    if (str == NULL || arr == NULL)
        return NULL;
    for (; str[x] != '\0'; x++) {
        index = search_index(str);
        arr[x] = my_ndup(str, index);
        str += index + 1;
    }
    k = my_getnbr(arr[0]);
    arr[++k] = NULL;
    return arr;
}
