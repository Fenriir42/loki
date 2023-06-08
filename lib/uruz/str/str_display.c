/*
** EPITECH PROJECT, 2022
** loki
** File description:
** str_display
*/

#include "my.h"

int str_display(char const *str)
{
    if (str == NULL) {
        write (2, "STR empty\n",11);
        return -1;
    }
    return write(1,str,str_len(str));
}
