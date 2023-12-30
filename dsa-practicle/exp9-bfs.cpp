#include <iostream>
#include <vector>
using namespace std;

class Graph
{
    // Number of vertices
    int v;
    // Number of edges
    int e;
    // Adjacency matrix
    int **adj;

public:
    // Constructor to create the initial adjacency matrix
    Graph(int v, int e);

    // Function to insert a new edge
    void addEdge(int start, int end);

    // Function to display the BFS traversal
    void BFS(int start);
};

// Constructor to fill the empty adjacency matrix
Graph::Graph(int v, int e)
{
    this->v = v;
    this->e = e;

    // Allocate memory for the adjacency matrix
    adj = new int *[v];
    for (int row = 0; row < v; row++)
    {
        adj[row] = new int[v];
        for (int column = 0; column < v; column++)
        {
            adj[row][column] = 0; // Initialize to 0 (no edge)
        }
    }
}

// Function to add an edge to the graph
void Graph::addEdge(int start, int end)
{
    // Considering a bidirectional edge
    adj[start][end] = 1;
    adj[end][start] = 1;
}

// Function to perform BFS on the graph
void Graph::BFS(int start)
{
    // Visited vector to ensure a vertex is not visited more than once
    vector<bool> visited(v, false);
    vector<int> q;
    q.push_back(start);

    // Mark the source as visited
    visited[start] = true;

    int current;
    while (!q.empty())
    {
        current = q[0];
        q.erase(q.begin());

        // Print the current node
        cout << current << " ";

        // Explore adjacent vertices
        for (int i = 0; i < v; i++)
        {
            if (adj[current][i] == 1 && !visited[i])
            {
                // Push the adjacent node to the queue
                q.push_back(i);
                // Mark it as visited
                visited[i] = true;
            }
        }
    }
}

int main()
{
    int v = 5, e = 4;
    // Create the graph
    Graph G(v, e);

    // Add edges
    G.addEdge(0, 1);
    G.addEdge(0, 2);
    G.addEdge(1, 3);

    // Perform BFS starting from vertex 0
    G.BFS(0);

    return 0;
}
