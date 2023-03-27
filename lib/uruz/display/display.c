/*
** EPITECH PROJECT, 2023
** Lib
** File description:
** mini_printf
*/

#include <stdarg.h>
#include "my.h"

static void nerf_percent(int i, const char * format)
{
    if (!((format [i] == '%' && (format[i + 1] == '%' || format[i + 1] == 's'
    || format[i + 1] == 'c' || format[i + 1] == 'i' ||
    format[i + 1] == 'd')) || ((format[i] == 's' || format[i] == 'i'
    || format[i] == 'c' || format[i] == '%' || format[i] == 'd')
    && format[i - 1] == '%')))
        write(1, &format[i], 1);
}

int display(const char *format, ...)
{
    va_list list ;
    va_start(list, format);
    for (int i = 0; format[i] != '\0'; i++) {
        if (format [i] == '%' && format[i + 1] == '\0')
            return 0;
        if (format [i] == '%' && format[i + 1] == 's')
            str_display(va_arg(list,char*));
        if (format [i] == '%' && (format[i + 1] == 'i' ||
        format[i + 1] == 'd'))
            nb_display(va_arg(list,int));
        if (format [i] == '%' && format[i + 1] == 'c')
            char_display(va_arg(list,int));
        if (format [i] == '%' && format[i + 1] == '%')
            write(1, "%", 1);
        nerf_percent(i, format);
    }
    va_end(list);
    return 0;
}
