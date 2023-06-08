/*
** EPITECH PROJECT, 2022
** loki
** File description:
** u_mem.h
*/

#ifndef _U_MEM_H
    #define _U_MEM_H

    #include <unistd.h>
    #include <stdlib.h>
    #include <stdbool.h>
    #include <stdio.h>
    #include <limits.h>

/**
 * Realloc memory for something
 * @param src thing to realloc
 * @param size actual size
 * @param new_size size wanted
 * @param element_size size of element wanted
 * @return an allocated memory zone of new_size that contain src |NULL if error
*/
void *mem_realloc(void *src, size_t size, size_t new_size);

/**
 * Malloc something but set at 0 n the bytes
 * @param nmen number of element wished
 * @param size sizeof("element wished")
 * @return an allocated memory zone set to 0 || NULL if error
*/
void *mem_calloc(size_t mem, size_t size);

/**
 * Set an memory zone to an int, bytes per bytes
 * @param src thing to set
 * @param c value of set
 * @param n number of bytes set
 * @return src but with c everywhere || NULL if error
*/
void *mem_set(void *src, int c, size_t n);

/**
 * Cpy a memory zone
 * @param dest thing that will contain the copy
 * @param src thing that will be copied
 * @param n number of bytes copied
*/
void *mem_cpy(void *dest, void const *src, size_t n);

#endif /* !_U_MEM_H_ */
