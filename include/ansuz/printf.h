/*
** EPITECH PROJECT, 2023
** Project
** File description:
** printf
*/

#ifndef PRINTF_H_
    #define PRINTF_H_

    #include <stdarg.h>

/**
 * @brief selec the format specifier
 *
 * @param count number of format specifier
 * @param flag format specifier
 * @param list arguments
 */
void flag_select(int *count, char *flag, va_list list);

/**
 * @brief convert to scientific format
 *
 * @param nb number to convert
 * @return int : the number in scientific format
 */
int sc_format(float nb);

/**
 * @brief display long integer
 *
 * @param nb number to display
 * @return int : 1 if success, 0 otherwise
 */
int long_display(long long nb);
/**
 * @brief display long long integer
 *
 * @param nb number to display
 * @return int : 1 if success, 0 otherwise
 */
int long_long_display(long long nb);
/**
 * @brief convert a decimal number to octal
 *
 * @param nb number to convert
 * @return int : the number in octal format
 */
int decimal_to_octal(unsigned int nb);

/**
 * @brief convert a decimal number to binary
 *
 * @param nb number to convert
 * @return int : the number in binary format
 */
int decimal_to_bin(unsigned int nb);
/**
 * @brief convert a decimal number to hexadecimal
 *
 * @param nb number to convert
 * @return int : the number in hexadecimal format
 */
int decimal_to_hex(unsigned int nb);
/**
 * @brief get a number from a string
 *
 * @param str string to get
 * @return int : the number
 */
int my_getnbr(char *str);
/**
 * @brief split a string into a word array
 *
 * @param str string to split
 * @return char** : the word array
 */
char **my_str_to_word_array(char *str);
#endif /* !PRINTF_H_ */
