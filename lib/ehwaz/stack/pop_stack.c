/*
** EPITECH PROJECT, 2022
** lemin
** File description:
** pop_stack.c
*/

#include "ehwaz/stack.h"
#include "kepler/k_debug_mode.h"

void *pop(stack_node_t **root)
{
    stack_node_t *temp = *root;
    void *popped = 0;

    if (is_empty(*root))
        return NULL;
    *root = (*root)->next;
    popped = temp->data;
    free(temp);
    return popped;
}
