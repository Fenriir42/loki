/*
** EPITECH PROJECT, 2023
** Project
** File description:
** flag_select
*/

#include <stdarg.h>
#include "my.h"
#include "printf.h"

void next_select(int *count, char *flag, va_list list)
{
    if (str_ncmp(flag, "b", str_len(flag)) == 0)
        *count += decimal_to_bin(va_arg(list,int));
    if (str_ncmp(flag, "o", str_len(flag)) == 0)
        *count += decimal_to_octal(va_arg(list,int));
    if (str_ncmp(flag, "x", str_len(flag)) == 0)
        *count += decimal_to_hex(va_arg(list,int));
}

void flag_select(int *count, char *flag, va_list list)
{
    if (str_ncmp(flag, "s", str_len(flag)) == 0)
        *count += str_display(va_arg(list,char*));
    if (str_ncmp(flag, "i", str_len(flag)) == 0 ||
    str_ncmp(flag, "d", str_len(flag)) == 0)
        *count += nb_display(va_arg(list,int));
    if (str_ncmp(flag, "E", str_len(flag)) == 0)
        *count += sc_format(va_arg(list,double));
    if (str_ncmp(flag, "c", str_len(flag)) == 0)
        *count += char_display(va_arg(list, int));
    if (str_ncmp(flag, "%", str_len(flag)) == 0)
        *count += write(1, "%", 1);
    if (str_ncmp(flag, "li", str_len(flag)) == 0 ||
    str_ncmp(flag, "ld", str_len(flag)) == 0)
        *count += long_display(va_arg(list,long));
    if (str_ncmp(flag, "lli", str_len(flag)) == 0 ||
    str_ncmp(flag, "lld", str_len(flag)) == 0)
        *count += long_long_display(va_arg(list,long long));
    next_select(count, flag, list);
}
