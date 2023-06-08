/*
** EPITECH PROJECT, 2023
** loki
** File description:
** mem_calloc
*/

#include "uruz/uruz.h"

void *mem_calloc(size_t nmem, size_t size)
{
    void *dest = malloc(nmem * size);

    if (dest)
        mem_set(dest, 0, (nmem * size));
    return dest;
}
