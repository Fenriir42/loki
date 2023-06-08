/*
** EPITECH PROJECT, 2023
** loki
** File description:
** creates a list
*/

#include <stdlib.h>
#include "ehwaz/linked_lists.h"
#include "uruz/u_utils.h"

list_t *list_create(void)
{
    list_t *list = malloc(sizeof(list_t));

    if (!list) {
        CONST_WRITE(STDOUT, "Malloc failed\n");
        return NULL;
    }
    list->head = NULL;
    list->tail = NULL;
    list->size = 0;
    return list;
}
