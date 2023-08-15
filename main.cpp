#include "dijkstra.hpp"
// #include "node.hpp"

int main()
{
    int n = 7;
    Graph *graph = new Graph(n);
    int dist[n], prev[n];
    int start = 0;

    graph->addToNode(0, 1, 3);

    graph->printNode();
}