/*
** EPITECH PROJECT, 2023
** B-PSU-100-REN-1-1-navy-gabriel.hosquet
** File description:
** mem_realloc
*/

#include "my.h"

void *mem_realloc(void *src, size_t size, size_t new_size)
{
    void *dest = NULL;

    if (src == NULL)
        return mem_calloc(1, new_size);
    dest = mem_calloc(1, new_size);
    if (dest == NULL)
        return NULL;
    mem_cpy(dest, src, size);
    free(src);
    return dest;
}
