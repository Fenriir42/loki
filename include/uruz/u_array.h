/*
** EPITECH PROJECT, 2022
** loki
** File description:
** u_array.h
*/

#ifndef _U_ARRAY_H
    #define _U_ARRAY_H

    #include <stdlib.h>
    #include <stdbool.h>
    #include <stdio.h>
    #include <limits.h>

/**
 * free an array
 * @param array array to free
 * @return 84 is array not malloced 0 if success
*/
int array_free(char **array);

/**
 * calculate number of line in a char **
 * @param array array to scan
 * @return number of line in array or -1 if error
*/
int array_len(char const **array);

#endif /* !_U_ARRAY_H_ */
