/*
** EPITECH PROJECT, 2023
** B-PSU-100-REN-1-1-navy-gabriel.hosquet
** File description:
** array_len
*/

#include "my.h"

int array_len(char const **array)
{
    int i = 0;

    if (array == NULL) {
        write (2, "Char ** not malloced\n",22);
        return -1;
    }
    for (; array[i]; i++)
        if (array[i] == NULL) {
            error_display("array[%i] not malloced\n", i);
            continue;
        }
    return i;
}
