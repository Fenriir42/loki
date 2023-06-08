/*
** EPITECH PROJECT, 2022
** loki
** File description:
** array_display
*/

#include "my.h"

int array_display(char * const * array, bool linejump)
{
    if (array == NULL) {
        write (2, "Char ** not malloced\n",22);
        return 84;
    }
    for (int i = 0; array[i]; i++) {
        if (array[i] == NULL) {
            error_display("array[%i] not malloced\n", i);
            continue;
        }
        write (1,array[i],str_len(array[i]));
        if (linejump == true)
            write(1,"\n",1);
    }
    if (linejump == false)
        write(1, "\n", 1);
    return 0;
}
