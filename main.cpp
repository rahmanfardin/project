#include "dijkstra.hpp"

int main()
{
    int n = 7;
    Graph graph(n);
    int dist[n], prev[n];
    int start = 0;

    graph.addToNode(0, 1, 3);
    graph.addToNode(0, 2, 6);
    graph.addToNode(1, 0, 3);
    graph.addToNode(1, 2, 2);
    graph.addToNode(1, 3, 1);
    graph.addToNode(2, 1, 6);
    graph.addToNode(2, 1, 2);
    graph.addToNode(2, 3, 1);
    graph.addToNode(2, 4, 4);
    graph.addToNode(2, 5, 2);
    graph.addToNode(3, 1, 1);
    graph.addToNode(3, 2, 1);
    graph.addToNode(3, 4, 2);
    graph.addToNode(3, 6, 4);
    graph.addToNode(4, 2, 4);
    graph.addToNode(4, 3, 2);
    graph.addToNode(4, 5, 2);
    graph.addToNode(4, 6, 1);
    graph.addToNode(5, 2, 2);
    graph.addToNode(5, 4, 2);
    graph.addToNode(5, 6, 1);
    graph.addToNode(6, 3, 4);
    graph.addToNode(6, 4, 1);
    graph.addToNode(6, 5, 1);
    
    //graph->printNode();
    Dijkstra *d = new Dijkstra(dist, prev, start, graph);
    d->dijkstra();
    d->display_results();
    
}