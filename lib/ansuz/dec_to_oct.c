/*
** EPITECH PROJECT, 2022
** dex to oct
** File description:
** tranform decimal to octal
*/

#include "my.h"

int decimal_to_octal(unsigned int nb)
{
    char* octalnb;
    int basenb = nb;
    int i = 0;
    int rst = 0;
    int count = 0;
    char *base = "01234567";
    if (nb == 0)
        return write(1,"0",1);
    for (i = 0; basenb != 0;i++)
        basenb /= 8;
    octalnb = mem_calloc(sizeof(char), i + 1);
    for (i = 0 ; nb != 0 ; i++) {
        rst = nb % 8;
        octalnb[i] = base[rst];
        nb /= 8;
    }
    octalnb = str_rev(octalnb);
    count = write(1, octalnb, str_len(octalnb));
    free(octalnb);
    return count;
}
