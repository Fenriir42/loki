/*
** EPITECH PROJECT, 2022
** loki
** File description:
** convert a decimal to binary
*/

#include "my.h"
#include "printf.h"

int decimal_to_bin(unsigned int nb)
{
    char* binnb = NULL;
    int basenb = nb;
    int i = 0;
    int rst = 0;
    int count = 0;
    char *base = "01";
    if (nb == 0)
        return write(1,"0",1);
    for (i = 0; basenb != 0; i++)
        basenb /= 2;
    binnb = mem_calloc(sizeof(char), i + 1);
    for (i = 0; nb != 0; i++) {
        rst = nb % 2;
        binnb[i] = base[rst];
        nb /= 2;
    }
    binnb = str_rev(binnb);
    count = write(1, binnb, str_len(binnb));
    free(binnb);
    return count;
}
