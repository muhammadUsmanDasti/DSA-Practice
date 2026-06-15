#include <iostream>
#include <vector>

using namespace std;
struct edge{
    int data;
    int weight;
};
// Function to add an undirected edge between vertex u and vertex v
void addEdge(vector<vector<edge>> &adj, int u, int v,int weight) {
    adj[u].push_back({v,weight});
    adj[v].push_back({u,weight}); // Because the graph is undirected
}

// Function to display the adjacency list
void printGraph(const vector<vector<edge>> &adj) {
    for (int i = 0; i < adj.size(); ++i) {
        cout << i;
        // Iterate through all the connected neighbors of vertex i
        for (const edge &neighbor : adj[i]) {
            cout << " -> " << neighbor.data<<"-"<<neighbor.weight;
        }
        cout << endl;
    }
}

int main() {
    int V = 4; // Total number of vertices (0, 1, 2, 3)
    
    // Create an array (vector) of vectors to represent the adjacency list
    vector<vector<edge>> adjList(V);

    // Add edges to recreate the graph from your example
    addEdge(adjList, 0, 1, 5);
    addEdge(adjList, 0, 2, 3);
    addEdge(adjList, 1, 2, 7);
    addEdge(adjList, 2, 3, 2);

    // Display the final adjacency list
    printGraph(adjList);

    return 0;
}