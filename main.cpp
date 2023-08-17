#include "dijkstra.hpp"

void list_condition()
{
    cout << "=============================================================" << endl
         << "1. ENTER THE NODE" << endl
         << "2. SHOW LIST" << endl
         << "3. GET OUTPUT" << endl;
}

void enter_node(Graph graph)
{
    int source, destination, cost;
    cout << "Enter source: ";
    cin >> source;
    cout << "enter destination: ";
    cin >> destination;
    cout << "enter cost: ";
    cin >> cost;
    graph.addToNode(source, destination, cost);
}

int main()
{
    int n;
    Graph graph(n);
    bool run = true, isComp = false;
    int condition = -1, start = 0;

    cout << "Enter the value of n: ";
    cin >> n;
    int prev[n], dist[n];

    while (run)
    {
        list_condition();
        cout << "ente your choice: ";
        cin >> condition;

        switch (condition)
        {
        case 1:
        {
            int cont = 0;
            while (cont != -1 and !isComp)
            {
                enter_node(graph);
                cout << "Exit(-1): ";
                cin >> cont;
            }

            break;
        }
        case 2:
        {
            cout << "Your entered values:" << endl;
            graph.printNode();
            break;
        }
        case 3:
        {
            isComp = true;
            Dijkstra *d = new Dijkstra(dist, prev, start, graph);
            d->dijkstra();
            d->display_results();
            break;
        }

        default:
            cout<<"!!!!Wrong input!!!!"<<endl;
            break;
        }
    }
}