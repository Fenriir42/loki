/*
** EPITECH PROJECT, 2022
** loki
** File description:
** u_strings.h
*/

#ifndef _U_STRINGS_H
    #define _U_STRINGS_H

    #include <stdlib.h>
    #include <stdbool.h>
    #include <stdio.h>
    #include <limits.h>

/**
 * Transform an int in string
 * @param nb int to transform
 * @return the nb in string form
*/
char *str_get_from_int(int nb);

/**
 * Transform an float in string
 * @param nb float to transform
 * @param pre precision of the string (after comma)
 * pre need to be inferior to 6
 * @return the nb in string form
*/
char *str_get_from_float(float nb, int pre);
/**
 * Reverse an string
 * @param str string to reverse
 * @return the string but reversed with the \0 at the end
*/
char *str_rev(char *str);

/**
 * Display an string
 * @param str String to display
 * @return count of printed character if succes, -1 is str is empty
*/
int str_display(char const *str);

/**
 * Split string with specific separators.
 * @param str String to split.
 * @param separators String that contains all the separators.
 * @return NULL if str is null.
*/
char **str_split(char const *str, char const *separators);

char **str_split_optimized(char const *str);

/**
 * Copy a part of an string
 * @param str string wich is the source of the text to copy
 * @param start index of start of the copy
 * @param end index of end of the copy
 * @return the str that contain the selection
*/
char *str_copy_at(char const *str, size_t start, size_t end);


/**
 * Concatenate strings
 * @param dest string that will contain the two strings
 * @param src string that will be contain in the other
 * @return the concatenate string
*/
char *str_concat(char *dest , char const *src);

/**
 * duplicate an string
 * @param src string to duplicate
 * @return the duplicate of the string
*/
char *str_dup(char const *src);

/**
 * @brief get the string between two string
 * @param string string to scan
 * @param start string that start the selection
 * @param end string that end the selection
 * @return the string between start and end
 */
char *str_get_between (char *string, char *start, char *end);

/**
 * scan an string for find another string
 * @param str string to scan
 * @param to_find string to find
 * @return NULL if to_find is not in str || str if to_find is at the
 * beggining of str || char * that start where to_find is
*/
char *str_find_str(char *str, char const* to_find);

/**
 * scan an string for find an characters
 * @param str string to scan.
 * @param to_find character to test.
 * @return -1 if the caracter ins't present or the index of presence.
*/
int str_index_of(char const *str, char to_find);



/**
 * @brief check if a string is only composed of alpha character
 *
 * @param input
 * @return int
 */
int str_is_alpha(char const input);

/**
 * Count the len of an string
 * @param str string wich len is counted
 * @return the str length
*/
int str_len(char const *str);

/**
 * compare n characther between two string
 * @param s1 first string
 * @param s2 second string
 * @param n number of character to compare
 * @return 0 if equal till n number of character
*/
int str_ncmp(char const *s1, char const *s2, int n);

/**
 * compare characther between two string
 * @param s1 first string
 * @param s2 second string
 * @return 0 if equal
*/
int str_cmp(char const *s1, char const *s2);

#endif /* !_U_STRINGS_H */
