/*
** EPITECH PROJECT, 2022
** loki
** File description:
** str get from float
*/

#include "uruz/uruz.h"
#include <stdio.h>

static char *str_case(char *str)
{
    int len = str_len(str);
    char *temp = NULL;
    str[0] = '0';
    temp = str_copy_at(str, 0, str_len(str));
    str = mem_realloc(str, len, (len + 2));
    for (int i = 0; temp[i]; i++)
        str[i + 1] = temp[i];
    str[0] = '1';
    str[len + 1] = '\0';
    free(temp);
    return str;
}

static char *check(char *str)
{
    int index = 0;
    while (1) {
        index = str_index_of(str, ':');
        if (index == -1)
            break;
        if (index == 0)
            str = str_case(str);
        if (index >= 1 && str[index - 1] == '.') {
            str[index] = '0';
            str[index - 2] += 1;
        }
        if (index >= 1 && !(str[index - 1] == '.')) {
            str[index] = '0';
            str[index - 1] += 1;
        }
    }
    return str;
}

static char *decimal(char *str, float nb, size_t pre, int i)
{
    char *ptr = NULL;
    char *temporary = NULL;
    int temp = nb * cal_power(10, pre);

    ptr = str_get_from_int(temp);
    temporary = &ptr[i];
    if (temporary[pre - 1] >= '5')
        temporary[pre - 2] += 1;
    temporary[pre - 1] = '\0';
    if ((pre - 1) != 0) {
        str_concat(str, temporary);
        free(ptr);
        str = check(str);
    } else {
        str = check(ptr);
        str[i] = '0';
    }
    return str;
}

static char *entire(float nb, size_t pre)
{
    char *str = NULL;
    int i = 0;
    int entire = nb;
    char *temp = NULL;

    for (; (entire / cal_power(10, i)) != 0; i++);
    str = mem_calloc((i + pre + 1), sizeof(char));
    temp = str_get_from_int(entire);
    str_concat(str, temp);
    if ((pre - 1) != 0) {
        str_concat(str, ".");
        str = decimal(str, nb, pre, i);
        str[i + pre + 1] = '\0';
    } else {
        str = decimal(str, nb, pre ,i);
        str[i + 1] = '\0';
    }
    free(temp);
    return str;
}

char *str_get_from_float(float nb, int pre)
{
    char *str = NULL;
    if (pre < 0) {
        error_display("Precision must be positive\n");
        return NULL;
    }
    str = entire(nb, (pre + 1));
    return str;
}
