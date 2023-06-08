/*
** EPITECH PROJECT, 2023
** loki
** File description:
** adds to a list
*/

#include <stdlib.h>
#include "ehwaz/linked_lists.h"
#include "uruz/u_utils.h"

static unsigned int list_add_node(list_t *list, list_node_t *node)
{
    list->size++;
    node->next = NULL;
    if (list->tail == NULL) {
        list->head = node;
        list->tail = node;
        return 0;
    }
    list->tail->next = node;
    node->prev = list->tail;
    list->tail = node;
    return list->size - 1;
}

unsigned int list_add(list_t *list, void *value)
{
    list_node_t *node;

    if (!list || !value)
        return U_SENTINEL | !CONST_WRITE(STDOUT, LIST_OR_VALUE_NULL);
    node = malloc(sizeof(list_node_t));
    if (!node)
        return U_SENTINEL | !CONST_WRITE(STDOUT, "Malloc failed\n");
    node->value = value;
    node->next = NULL;
    node->prev = NULL;
    return list_add_node(list, node);
}
