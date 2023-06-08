/*
** EPITECH PROJECT, 2023
** loki
** File description:
** mem_set
*/

#include "uruz/uruz.h"

void *mem_set(void *src, int c, size_t n)
{
    uint8* src_ptr = (uint8 *)src;

    while (n--)
        *src_ptr++ = (uint8) c;
    return src;
}
