#include "node.hpp"
#include <bits/stdc++.h>
using namespace std;

class Graph
{
private:
    vector<node> *nodes;
    int numberOfNodes;

public:
    Graph() : numberOfNodes(0)
    {
        cout << "Number of nodes: " << numberOfNodes << endl;
        cout << "access set number of nodes" << endl;
    }

    Graph(int numberOfNodes)
    {
        this->numberOfNodes = numberOfNodes;
        setVectors();
    }

    void setNumberOfNodes(int numberOfNodes)
    {
        this->numberOfNodes = numberOfNodes;
        this->setVectors();
    }

    void setVectors()
    {
        nodes = new vector<node>(this->numberOfNodes);
    }

    void listPrint(vector<node> list)
    {
        for (auto i : list)
            cout << "node: " << i.dest << "\t cost: " << i.cost << endl;
        
    }

    void printNode()
    {
        cout << "Number of nodes: " << endl;
        for (int i = 0; i < this->numberOfNodes; i++)
            listPrint(nodes[i]);
    }

    void addToNode(int src, int dest, int cost)
    {
        cout << dest << " " << src << " " << cost << endl;
        node n;
        n.dest = dest;
        n.cost = cost;
        nodes[src].push_back(n);
    }
};
