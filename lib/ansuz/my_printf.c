/*
** EPITECH PROJECT, 2022
** loki
** File description:
** core
*/

#include <stdarg.h>
#include "my.h"
#include "printf.h"

static bool is_flag(char c, char const *flag)
{
    return (str_index_of(flag, c) != -1);
}

char *flag_detect(const char *format)
{
    size_t len = 0;
    char *flag = NULL;

    for (size_t i = 0; format[i + 1]; i++) {
        if (!is_flag(format[i], "sdicEbox%")) {
            len++;
        } else {
            flag = str_copy_at(format, i - len, i + 1);
            break;
        }
    }
    return flag;
}

int my_printf(const char *format, ...)
{
    va_list list;
    int count = 0;
    char *flag = NULL;

    va_start(list, format);
    for (size_t i = 0; format[i]; i++) {
        if (format[i] == '%' && format[i + 1] != '\0') {
            flag = flag_detect(&format[i + 1]);
            i += str_len(flag);
            flag_select(&count, flag, list);
            free(flag);
        } else
            count += write(STDOUT_FILENO, &format[i], 1);
    }
    va_end(list);
    return count;
}
