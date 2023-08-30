#include "node.hpp"
#include <bits/stdc++.h>
using namespace std;

class Graph
{
private:
    int numberOfNodes;

public:
    list<node> *nodes;

    Graph() : numberOfNodes(0) {}

    Graph(int numberOfNodes) : numberOfNodes(numberOfNodes)
    {
        this->nodes = new list<node>[this->numberOfNodes];
    }

    void printNode()
    {
        for (int i = 0; i < this->numberOfNodes; i++)
            for (auto j : this->nodes[i])
                cout << "source: " << i << "\tnode: " << j.dest 
                     << "\t cost: " << j.cost << endl;
    }

    void addToNode(int source, int destination, int cost)
    {
        node n;
        n.dest = destination;
        n.cost = cost;
        nodes[source].push_back(n);
    }

    int getNumberOfNodes()
    {
        return this->numberOfNodes;
    }
};
