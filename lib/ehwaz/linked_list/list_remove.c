/*
** EPITECH PROJECT, 2023
** loki
** File description:
** removes a node from the list
*/

#include "ehwaz/linked_lists.h"
#include "uruz/u_utils.h"

static void list_remove_node(list_t *list, list_node_t *node)
{
    if (!node) {
        CONST_WRITE(STDERR, "Node don't exist");
        return;
    }
    list->size--;
    if (list->head == node)
        list->head = node->next;
    if (list->tail == node)
        list->tail = node->prev;
    if (node->prev)
        node->prev->next = node->next;
    if (node->next)
        node->next->prev = node->prev;
    node->next = NULL;
    node->prev = NULL;
    free(node);
}

void list_remove(list_t *list, unsigned int index)
{
    list_node_t *node;

    if (list == NULL) {
        write(1, "list_remove : list == NULL\n", 27);
        return;
    }
    node = list_get_node(list, index);
    if (node != NULL) {
        list_remove_node(list, node);
    }
}
