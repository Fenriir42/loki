/*
** EPITECH PROJECT, 2023
** loki
** File description:
** header
*/

#ifndef LIST
    #define LIST

    #include <stddef.h>
    #include <unistd.h>
    #include <stdlib.h>

    #define LIST_OR_VALUE_NULL "list_add : list or value is NULL\n"

typedef struct list_node_s list_node_t;
typedef struct list_s list_t;

struct list_node_s {
    void *value;
    list_node_t *next;
    list_node_t *prev;
};

struct list_s {
    list_node_t *head;
    list_node_t *tail;
    unsigned int size;
};

/**
 * @brief create the list
 *
 * @return the list freshly created
 */
list_t *list_create(void);

/**
 * @brief add a node to the list
 *
 * @param list the list where to add
 * @param value the value to add
 * @return index of the node
 */
unsigned int list_add(list_t *list, void *value);

/**
 * @brief get the list
 *
 * @param list list to get
 * @param index where to start reading
 * @return void*
 */
void *list_get(list_t *list, unsigned int index);

/**
 * @brief get a node from the list
 *
 * @param list list where to get the node
 * @param index the index of the node to get
 * @return the node
 */
list_node_t *list_get_node(list_t *list, unsigned int index);

/**
 * @brief remove a node
 *
 * @param list the list to modify
 * @param index the index of the node to remove
 */
void list_remove(list_t *list, unsigned int index);

/**
 * @brief destroy the list
 * @param list the list to destroy
 */
void list_destroy(list_t *list);

#endif
