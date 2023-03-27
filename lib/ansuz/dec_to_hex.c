/*
** EPITECH PROJECT, 2023
** Project
** File description:
** dec_to_hex
*/

#include "my.h"

int decimal_to_hex(unsigned int nb)
{
    char* hexnb = NULL;
    int basenb = nb;
    int i = 0;
    int rst = 0;
    int count = 0;
    char *base = "0123456789ABCDEF";
    if (nb == 0)
        return write(1,"0",1);
    for (i = 0; basenb != 0; i++)
        basenb /= 16;
    hexnb = mem_calloc(sizeof(char), i + 1);
    for (i = 0; nb != 0; i++) {
        rst = nb % 16;
        hexnb[i] = base[rst];
        nb /= 16;
    }
    hexnb = str_rev(hexnb);
    count = write(1, hexnb, str_len(hexnb));
    free(hexnb);
    return count;
}
