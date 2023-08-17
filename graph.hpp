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

    void listPrint(int source, list<node> List)
    {
        for (auto i : List)
            cout << "source: " << source << "\tnode: " << i.dest << "\t cost: " << i.cost << endl;
    }

    void printNode()
    {
        for (int i = 0; i < this->numberOfNodes; i++)
            listPrint(i, nodes[i]);
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
