/*
** EPITECH PROJECT, 2022
** lemin
** File description:
** push_stack.c
*/

#include "ehwaz/stack.h"
#include "kepler/k_debug_mode.h"

void push(stack_node_t** root, void *data)
{
    stack_node_t* stack_node = new_node(data);

    stack_node->next = *root;
    *root = stack_node;
    DEBUG("data pushed to stack\n");
}
