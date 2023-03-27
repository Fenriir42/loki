/*
** EPITECH PROJECT, 2022
** lemin
** File description:
** stack.h
*/

#ifndef STACK_H
    #define STACK_H

    #include <stddef.h>
    #include <stdlib.h>
    #include <stdio.h>

typedef struct stack_node_s {
    void *data;
    struct stack_node_s *next;
}stack_node_t;

/**
 * @brief check if the stack is empty
 *
 * @param root the root of the stack
 * @return int : 1 if the stack is empty, 0 otherwise
 */
int is_empty(stack_node_t *root);

/**
 * @brief push a node on the stack
 * @param data the data of the node
 * @return stack_node_t * : the node
 */
stack_node_t *new_node(void *data);

/**
 * @brief push a node on the stack
 *
 * @param root the root of the stack
 * @param data the data of the node
 */
void push(stack_node_t **root, void *data);

/**
 * @brief pop the first node from the stack
 *
 * @param root the root of the stack
 * @return void * : the first node value
 */
void *pop(stack_node_t **root);

/**
 * @brief get the first node value from the stack
 *
 * @param root the root of the stack
 * @return void * : the node value
 */
void *peek(stack_node_t *root);

#endif
