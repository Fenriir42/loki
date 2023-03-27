/*
** EPITECH PROJECT, 2023
** minishell 1
** File description:
** uruz
*/

#ifndef URUZ_H
    #define URUZ_H

    #include <unistd.h>
    #include <stdlib.h>
    #include <stdbool.h>
    #include <stdio.h>
    #include <limits.h>

    #ifndef _UNUSED_H_
        #define UNUSED __attribute__((unused))
    #endif /* !_UNUSED_H_ */

/**
 * Realloc memory for something
 * @param src thing to realloc
 * @param size actual size
 * @param new_size size wanted
 * @param element_size size of element wanted
 * @return an allocated memory zone of new_size that contain src |NULL if error
*/
void *mem_realloc(void *src, size_t size, size_t new_size);

/**
 * Malloc something but set at 0 n the bytes
 * @param nmen number of element wished
 * @param size sizeof("element wished")
 * @return an allocated memory zone set to 0 || NULL if error
*/
void *mem_calloc(size_t mem, size_t size);

/**
 * Set an memory zone to an int, bytes per bytes
 * @param src thing to set
 * @param c value of set
 * @param n number of bytes set
 * @return src but with c everywhere || NULL if error
*/
void *mem_set(void *src, int c, size_t n);

/**
 * Cpy a memory zone
 * @param dest thing that will contain the copy
 * @param src thing that will be copied
 * @param n number of bytes copied
*/
void *mem_cpy(void *dest, void const *src, size_t n);

int display(const char *format, ...);

/**
 * Calculate the result of nb^p
 * @param nb nb to multiply by himself p time
 * @param p number of auto multiply
 * @return the result of the operation
*/
int cal_power(int nb, int p);

/**
 * Display an character
 * @param c character to display
*/
int char_display(char c);

/**
 * Display the float with the precision given
 * @param nb number to display
 * @param pre number of diits after comma ( < 6)
 * if 0 just display the entire part
*/
int float_display(float nb,int pre);

/**
 * Display an number
 * @param nb number to display
 * @return nb of character printed
*/
int nb_display(long long nb);

/**
 * transform an str into an int
 * @param str string to transform into an int
 * @return the str but in int form
*/
int nb_get(char const *str);

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
 * Count the len of an string
 * @param str string wich len is counted
 * @return the str length
*/
int str_len(char const *str);

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
 * scan an string for find an characters
 * @param str string to scan.
 * @param to_find character to test.
 * @return -1 if the caracter ins't present or the index of presence.
*/
int str_index_of(char const *str, char to_find);

/**
 * scan an string for find another string
 * @param str string to scan
 * @param to_find string to find
 * @return NULL if to_find is not in str || str if to_find is at the
 * beggining of str || char * that start where to_find is
*/
char *str_find_str(char *str, char const* to_find);

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

/**
 * Display an array.
 * @param array Array to display.
 * @param line_jump 1 if you want /n between line of the array, 0 if not
 * @return 84 if array is null || empty or 0 is succes.
*/
int array_display(char * const * array, bool line_jump);

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

#endif
