/*
** EPITECH PROJECT, 2022
** loki
** File description:
** peek_stack.c
*/

#include "ehwaz/stack.h"
#include "kepler/k_debug_mode.h"

void *peek(stack_node_t *root)
{
    if (is_empty(root))
        return NULL;
    return root->data;
}
