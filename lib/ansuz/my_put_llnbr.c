/*
** EPITECH PROJECT, 2022
** my put long long number
** File description:
** the put number but for long long int
*/

#include <unistd.h>
#include "my.h"
#include "printf.h"

int long_long_display(long long nb)
{
    static float count = 0;

    if (nb > LONG_MAX) {
        return 0;
    }
    if (nb < 0) {
        char_display('-');
        long_long_display(-nb);
        count++;
    } else if (nb > 9) {
        long_long_display(nb / 10);
        long_long_display(nb % 10);
        count += 0.5;
    } else {
        char_display(nb + '0');
        count++;
    }
    return (int)count;
}
