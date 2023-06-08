/*
** EPITECH PROJECT, 2022
** loki
** File description:
** list_destroy.c
*/

#include <stdlib.h>
#include <unistd.h>

#include "ehwaz/linked_lists.h"
#include "uruz/u_utils.h"

void list_destroy(list_t *list)
{
    list_node_t *node = list->head;
    list_node_t *next;

    while (node) {
        next = node->next;
        free(node);
        node = next;
    }
    free(list);
}
