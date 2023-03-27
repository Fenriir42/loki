/*
** EPITECH PROJECT, 2022
** my put nbr bin
** File description:
** display a nbr in binary
*/

#include "my.h"

int long_display(long long nb)
{
    static float count = 0;

    if (nb > LONG_MAX) {
        return 0;
    }
    if (nb < 0) {
        char_display('-');
        long_display(-nb);
        count++;
    } else if (nb > 9) {
        long_display(nb / 10);
        long_display(nb % 10);
        count += 0.5;
    } else {
        char_display(nb + '0');
        count++;
    }
    return (int)count;
}
