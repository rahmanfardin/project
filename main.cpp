#include "dijkstra.hpp"

void list_condition();
void enter_node(Graph graph);

int main()
{
    int n;
    bool run = true, isComp = false;
    int condition = -1, start = 0;

    cout << "Enter the number of nodes: ";
    cin >> n;
    int prev[n], dist[n];
    Graph graph(n);
    Dijkstra *d ;

    while (run)
    {
        list_condition();
        cout << "Enter your choice: ";
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
            if (isComp)
                cout << "already compiled" << endl;

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
            if (!isComp){
                d = new Dijkstra(dist, prev, start, graph);
                isComp = true;
            }
            d->dijkstra();
            d->display_results();
            break;
        }
        case 4:
        {
            if (!isComp){
                d = new Dijkstra(dist, prev, start, graph);
                isComp = true;
            }
            d->dijkstra();
            d->display_source_results();
            break;
        }
        case 5:
            run = false;
            cout << "goodbye!" << endl;
            break;

        default:
            cout << "!!!!Wrong input!!!!" << endl;
            break;
        }
    }
}

void list_condition()
{
    cout << "=============================================================" << endl
         << "1. ENTER THE NODE" << endl
         << "2. SHOW LIST" << endl
         << "3. GET OUTPUT" << endl
         << "4. Source output" << endl
         << "5. EXIT" << endl;
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