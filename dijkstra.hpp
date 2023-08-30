#include "graph.hpp"

class Dijkstra
{
private:
    int   *distance;
    int   *previous;
    int   source;
    Graph graph;

public:
    Dijkstra(int *distance, int *previous, int source, Graph graph)
    {
        this->distance = distance;
        this->previous = previous;
        this->source = source;
        this->graph = graph;
    }

    void dijkstra()
    {
        int numberofnodes = graph.getNumberOfNodes();
        for (int i = 0; i < numberofnodes; i++)
        {
            distance[i] = INT_MAX;
            previous[i] = -1;
        }

        distance[source] = 0;
        set<int> S;
        list<int> Q;

        for (int u = 0; u < numberofnodes; u++)
        {
            Q.push_back(u);
        }

        while (!Q.empty())
        {
            auto i = min_element(Q.begin(), Q.end());
            int u = *i;
            Q.remove(u);
            S.insert(u);

            for (auto it = graph.nodes[u].begin(); it != graph.nodes[u].end(); it++)
            {
                if ((distance[u] + (it->cost)) < distance[it->dest])
                {
                    distance[it->dest] = (distance[u] + (it->cost));
                    previous[it->dest] = u;
                }
            }
        }
    }

    void display_results()
    {
        cout << "the main building \" " << this->source << " \"" << endl;
        for (int i = 0; i < this->graph.getNumberOfNodes(); i++)
        {
            if (i != this->source)
                cout << "laying pipe from " << this->previous[i] << " to " << i << ": coosts: " << this->distance[i] << endl;
        }
    }

    void display_source_results(){
        for (int i = 0; i < this->graph.getNumberOfNodes(); i++)
        {
            if(i != this->source)
                cout<< this->source<< " to "<< i<<" , Cost: "<< this->distance[i]<< " Privious: "<< this->previous[i]<<endl;
        }
        
    }
};
