/*
** EPITECH PROJECT, 2023
** loki
** File description:
** gets the content of a node
*/

#include "ehwaz/linked_lists.h"

list_node_t *list_get_node(list_t *list, unsigned int index)
{
    list_node_t *node;
    unsigned int current = 0;

    if (!list) {
        write(1, "list_get_node : list == NULL\n", 29);
        return NULL;
    }
    node = list->head;
    if (!node) {
        write(1, "list_get_node : node == NULL\n", 29);
        return NULL;
    }
    while (node && current < index) {
        current++;
        node = node->next;
    }
    return node;
}

void *list_get(list_t *list, unsigned int index)
{
    list_node_t *node = list_get_node(list, index);

    if (node != NULL)
        return node->value;
    return NULL;
}
