/*
** EPITECH PROJECT, 2022
** put float
** File description:
** put float
*/

#include "my.h"

int float_display(float nb,int pre)
{
    char *str = str_get_from_float(nb, pre);
    int len = str_len(str);
    write(1,str,str_len(str));
    free(str);
    return len;
}
