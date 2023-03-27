/*
** EPITECH PROJECT, 2023
** B-PSU-100-REN-1-1-navy-gabriel.hosquet
** File description:
** mem_set
*/

#include "my.h"

void *mem_set(void *src, int c, size_t n)
{
    uint8* src_ptr = (uint8 *)src;

    while (n--)
        *src_ptr++ = (uint8) c;
    return src;
}
