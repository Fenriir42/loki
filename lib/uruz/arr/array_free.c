/*
** EPITECH PROJECT, 2023
** B-PSU-100-REN-1-1-navy-gabriel.hosquet
** File description:
** array_free
*/

#include "my.h"

int array_free(char **array)
{
    size_t size = 0;
    if (array == NULL) {
        write (2, "Char ** not malloced\n",22);
        return 84;
    }
    size = array_len((char const **)array);
    for (size_t i = 0; i < size; i++) {
        if (array[i] == NULL) {
            error_display("array[%i] not malloced\n", i);
            continue;
        }
        free(array[i]);
        array[i] = NULL;
    }
    free(array);
    array = NULL;
    return 0;
}
