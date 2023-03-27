/*
** EPITECH PROJECT, 2022
** my power rec
** File description:
** power but rec
*/

#include "my.h"

int cal_power(int nb, int p)
{
    if (p == 0)
        return 1;
    if (p < 0) {
        return 0;

    } else {
        return (nb * cal_power(nb, (p - 1 )));
    }
}
