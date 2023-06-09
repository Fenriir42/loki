/*
** EPITECH PROJECT, 2023
** loki
** File description:
** mem_cpy
*/

#include "my.h"

void *mem_cpy(void *dest, void const *src, size_t n)
{
    uint8 const* src_ptr = (uint8 const *)src;
    uint8* dest_ptr = (uint8 *)dest;

    while (n--)
        *dest_ptr++ = *src_ptr++;
    return dest;
}
