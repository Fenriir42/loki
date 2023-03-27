/*
** EPITECH PROJECT, 2022
** lib
** File description:
** compare n number of characters between 2 strings
*/

#include <unistd.h>

int str_ncmp(char const *s1, char const *s2, int n)
{
    if (n < 1) {
        write(2,"n have inccorect value\n",24);
        return 84;
    }
    for (int i = 0;(s1[i] != '\0' || s2[i] != '\0') && i < n; i++)
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
    return 0;
}
