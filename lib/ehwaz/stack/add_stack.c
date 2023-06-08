/*
** EPITECH PROJECT, 2022
** loki
** File description:
** insert_queue.c
*/

#include "ehwaz/stack.h"

stack_node_t *new_node(void *data)
{
    stack_node_t *stack_node = (stack_node_t *)malloc(sizeof(stack_node_t));

    stack_node->data = data;
    stack_node->next = NULL;
    return stack_node;
}
