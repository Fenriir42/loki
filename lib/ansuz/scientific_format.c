/*
** EPITECH PROJECT, 2022
** loki
** File description:
** put an int in the normalized scientific format
*/

#include "my.h"
#include "printf.h"

static void display_sign (int i, int *count)
{
    if (i < 0)
        *count += write(1,"-",1);
    if (i >= 0)
        *count += write(1,"+",1);
    if (i < 10 && i > -10)
        *count += nb_display(0);
    *count += nb_display(i);
}

int sc_format(float nb)
{
    int i = 0;
    int count = 0;

    if (nb < 0) {
        nb *= -1;
        count += write(1,"-",1);
    }
    if (nb > 10) {
        for (; nb > 10; ++i)
            nb /= 10;
    }
    if (nb < 1) {
        for (; nb < 1 ; --i)
            nb *= 10;
    }
    count += float_display(nb, 6);
    count += write(1,"E",1);
    display_sign(i, &count);
    return count;
}
