/*
** EPITECH PROJECT, 2023
** minishell 1
** File description:
** U_utils
*/

#ifndef U_UTILS_H_
    #define U_UTILS_H_

    #ifndef _CONST_WRITE_
        #define CONST_WRITE(std, buff) (write(std, buff, (sizeof (buff) - 1)))
    #endif /* !_CONST_WRITE_ */

    #ifndef _UNUSED_H_
        #define UNUSED __attribute__((unused))
    #endif /* !_UNUSED_H_ */

    #ifndef _EXIT_KO_
        #define EXIT_KO (84)
    #endif /* !_EXIT_KO_*/

    #ifndef _NULL_H_
        #define NULL ((void *)0)
    #endif /* !_NULL_H_*/

    #define ARG_ERROR "Incorrect Number of arguments\n"
    #define K_SENTINEL (-1)

enum {
    STDIN = 0,
    STDOUT = 1,
    STDERR = 2
};
#endif
