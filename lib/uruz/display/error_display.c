/*
** EPITECH PROJECT, 2022
** loki
** File description:
** error_display
*/

#include "my.h"
#include <stdarg.h>

static void error_char_display(char const c)
{
    write(2, &c, 1);
}

static void error_string_display(char const *str)
{
    write(2, str, str_len(str));
}

static void nerf_percent(int i, const char * format)
{
    if (!((format [i] == '%' && (format[i + 1] == '%' || format[i + 1] == 's'
    || format[i + 1] == 'c' || format[i + 1] == 'i' ||
    format[i + 1] == 'd')) || ((format[i] == 's' || format[i] == 'i'
    || format[i] == 'c' || format[i] == '%' || format[i] == 'd')
    && format[i - 1] == '%')))
        error_char_display(format[i]);
}

static void error_nb_display(int nb)
{
    if (nb < 0) {
        error_char_display('-');
        nb_display(-nb);
    } else if (nb > 9) {
        nb_display(nb / 10);
        nb_display(nb % 10);
    } else {
        error_char_display(nb + '0');
    }
}

int error_display(const char *format, ...)
{
    va_list list;
    va_start(list, format);
    for (int i = 0; format[i] != '\0'; i++) {
        if (format [i] == '%' && format[i + 1] == '\0')
            return 0;
        if (format [i] == '%' && format[i + 1] == 's')
            error_string_display(va_arg(list,char*));
        if (format [i] == '%' && (format[i + 1] == 'i' ||
        format[i + 1] == 'd'))
            error_nb_display(va_arg(list,int));
        if (format [i] == '%' && format[i + 1] == 'c')
            error_char_display(va_arg(list,int));
        if (format [i] == '%' && format[i + 1] == '%')
            error_char_display('%');
        nerf_percent(i, format);
    }
    va_end(list);
    return 0;
}
