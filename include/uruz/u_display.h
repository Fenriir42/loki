/*
** EPITECH PROJECT, 2022
** loki
** File description:
** u_display.h
*/

#ifndef _U_DISPLAY_H
    #define _U_DISPLAY_H

    #include <unistd.h>
    #include <stdlib.h>
    #include <stdbool.h>
    #include <stdio.h>
    #include <limits.h>

int display(const char *format, ...);

/**
 * Display an character
 * @param c character to display
*/
int char_display(char c);

/**
 * Display an array.
 * @param array Array to display.
 * @param line_jump 1 if you want /n between line of the array, 0 if not
 * @return 84 if array is null || empty or 0 is succes.
*/
int array_display(char * const * array, bool line_jump);


/**
 * Display an error message on error channel
 * @param format Error message to print
 * @return 0 if succes, 84 is str is empty
*/
int error_display(const char *format, ...);

/**
 * Display an message on stdout channel
 * @param format message to print, with flags or no
 * @return -1 if error || number of character printed
*/
int my_printf(const char *format, ...);

#endif /* !_U_DISPLAY_H_ */
