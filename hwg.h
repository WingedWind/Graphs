#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

struct edge {
    int v1; int v2;
    int w;
};

int compare (const void *x1, const void *x2);
int min_edge (struct edge *graph_table, const int lines);
void input (int *n, struct edge **graph_table, int *lines);
int kruskal (struct edge *graph_table, const int n, const int lines);
int loop_graph (struct edge *graph_table, const int n, const int lines);
void test_input (struct edge *graph_table, const int n, const int lines);
void connected_grapht (struct edge *graph_table, const int parent, const int current, int* peaks, const int lines);
int paint (struct edge *graph_table, const int parent, const int current, int* peaks, const int lines);
