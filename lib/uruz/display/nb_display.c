/*
** EPITECH PROJECT, 2022
** loki
** File description:
** display a nbr in binary
*/

#include "my.h"

int nb_display(long long nb)
{
    static float count = 0;

    if (nb > INT_MAX) {
        return 0;
    }
    if (nb < 0) {
        char_display('-');
        nb_display(-nb);
        count++;
    } else if (nb > 9) {
        nb_display(nb / 10);
        nb_display(nb % 10);
        count += 0.5;
    } else {
        char_display(nb + '0');
        count++;
    }
    return (int)count;
}
