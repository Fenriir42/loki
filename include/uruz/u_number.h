/*
** EPITECH PROJECT, 2022
** loki
** File description:
** u_number.h
*/

#ifndef _U_NUMBER_H
    #define _U_NUMBER_H

    #include <stdlib.h>
    #include <stdbool.h>
    #include <stdio.h>
    #include <limits.h>

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
 * Calculate the result of nb^p
 * @param nb nb to multiply by himself p time
 * @param p number of auto multiply
 * @return the result of the operation
*/
int cal_power(int nb, int p);

#endif /* !_U_NUMBER_H_ */
