/*
** EPITECH PROJECT, 2022
** loki
** File description:
** power but rec
*/

#include "my.h"

int cal_power(int nb, int p)
{
    if (!p)
        return 1;
    if (p < 0)
        return 0;
    return (nb * cal_power(nb, (p - 1 )));

}
