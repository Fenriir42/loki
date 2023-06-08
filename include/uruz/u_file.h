/*
** EPITECH PROJECT, 2022
** loki
** File description:
** u_file.h
*/

#ifndef _U_FILE_H
    #define _U_FILE_H

    #include <unistd.h>
    #include <stdlib.h>
    #include <stdbool.h>
    #include <stdio.h>
    #include <limits.h>

/**
 * @brief read a file and return it as a string
 *
 * @param filepath
 * @return char*
 */
char *read_file(char const *filepath);
#endif /* !_U_FILE_H_ */
