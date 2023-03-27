/*
** EPITECH PROJECT, 2022
** lem-in
** File description:
** graph.h
*/

#ifndef GRAPH_H
    #define GRAPH_H

typedef struct adjacent_node_s adjacent_node_t;

struct adjacent_node_s {
    int dest;
    adjacent_node_t *next;
};

typedef struct {
    adjacent_node_t *head;
} adjacent_list_t;

/**
 * @brief struct to represent a graph
 * a graph is an array of adjacency lists
 * Size of array will be V (number of vertices in graph)
 */
typedef struct {
    int vertex;
    adjacent_list_t *array;
} graph_t;

/**
 * @brief Print the graph
 * @param graph  pointer to the graph
 */
void print_graph(graph_t *graph);

/**
 * @brief Create a graph with V vertices
 * @param graph  pointer to the graph
 * @param src  source vertex
 * @param dest  destination vertex
 */
void add_edge(graph_t *graph, int src, int dest);

/**
 * @brief Create a Graph object
 * @param V  number of vertices
 * @return graph_t * : pointer to the new graph
 */
graph_t* create_graph(int vertex);

/**
 * @brief add an edge to an undirected graph
 * @param dest destination vertex
 * @return adjacent_node_t * : pointer to the new node
 */
adjacent_node_t *new_adj_node(int dest);

#endif
