/*
** EPITECH PROJECT, 2022
** loki
** File description:
** graph.c
*/

#include <stdio.h>
#include <stdlib.h>
#include "graph.h"
#include "kepler/k_debug_mode.h"
#include "kepler/kepler.h"
#include "uruz/u_utils.h"

adjacent_node_t *new_adj_node(int dest)
{
    adjacent_node_t *new_node = malloc(sizeof(adjacent_node_t));

    if (!new_node)
            return NULL;
    new_node->dest = dest;
    new_node->next = NULL;
    return new_node;
}

graph_t *create_graph(int vertex)
{
    graph_t *graph = (graph_t *)malloc(sizeof(graph_t));

    graph->vertex = vertex;
    graph->array = (adjacent_list_t *)malloc(vertex * sizeof(adjacent_list_t));
    for (int i = 0; i < vertex; ++i)
        graph->array[i].head = NULL;
    return graph;
}

void valid_graph(graph_t *graph, adjacent_node_t *new_node, int ch)
{
    adjacent_node_t *check = graph->array[ch].head;

    while (check->next)
        check = check->next;
    check->next = new_node;
}

void add_edge(graph_t * graph, int src, int dest)
{
    adjacent_node_t *new_node = new_adj_node(dest);

    if (!graph->array[src].head) {
        new_node->next = graph->array[src].head;
        graph->array[src].head = new_node;
    } else {
        valid_graph(graph, new_node, src);
    }
    new_node = new_adj_node(src);
    if (!graph->array[dest].head) {
        new_node->next = graph->array[dest].head;
        graph->array[dest].head = new_node;
    } else {
        valid_graph(graph, new_node, dest);
    }
}

void print_graph(graph_t *graph)
{
    adjacent_node_t *node;
    for (int v = 0; v < graph->vertex; ++v) {
        node = graph->array[v].head;
        display("\n Adjacency list of vertex %d\n head ", v);
        while (node) {
            display("-> %d", node->dest);
            node = node->next;
        }
        CONST_WRITE(STDOUT, "\n");
    }
}
