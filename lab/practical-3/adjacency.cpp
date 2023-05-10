// Write a program to represent a graph using adjacency list.
#include <iostream>
#include <list>
using namespace std;

class Graph
{
    int V;          // number of vertices
    list<int> *adj; // pointer to an array containing adjacency lists

public:
    Graph(int V);               // constructor
    void addEdge(int v, int w); // function to add an edge to the graph
    void printGraph();          // function to print the adjacency list representation of the graph
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
    adj[w].push_back(v);
}

void Graph::printGraph()
{
    for (int i = 0; i < V; i++)
    {
        cout << "Adjacency list of vertex " << i << ":\n";
        for (auto j : adj[i])
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main()
{
    int V, E, v, w;
    cout << "Enter the number of vertices in the graph: ";
    cin >> V;
    Graph g(V);
    cout << "Enter the number of edges in the graph: ";
    cin >> E;
    for (int i = 0; i < E; i++)
    {
        cout << "Enter the vertices connected by edge " << i + 1 << ": ";
        cin >> v >> w;
        g.addEdge(v, w);
    }
    g.printGraph();

    cout << endl
         << "Name:-Kailash Badu" << endl;
    cout << "Roll No.:- 09" << endl;

    return 0;
}
