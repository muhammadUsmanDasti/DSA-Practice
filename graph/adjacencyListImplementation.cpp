// Task 2: Adjacency List Representation 
// Write a program to represent the same graph using an adjacency list. 
// Requirements 
// • Use array/vector of linked lists or vectors  
// • Display each vertex and its connected neighbors  
// Example Output 
// 0 -> 1 -> 2 
// 1 -> 0 -> 2 
// 2 -> 0 -> 1 -> 3 
// 3 -> 2 



#include <iostream>
#include <vector>

using namespace std;

// Task 6: Find Degree of a Vertex 
// For an undirected graph, write a function to find the degree of a given vertex.
int degreeOfAvertexInUndirectedGraph(const vector<vector<int>> &adjList,int v){

    return adjList[v].size();
}

// Function to add an undirected edge between vertex u and vertex v
void addEdge(vector<vector<int>>& adj, int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u); // Because the graph is undirected
}

// Function to display the adjacency list
void printGraph(const vector<vector<int>>& adj) {
    for (int i = 0; i < adj.size(); ++i) {
        cout << i;
        // Iterate through all the connected neighbors of vertex i
        for (int neighbor : adj[i]) {
            cout << " -> " << neighbor;
        }
        cout << endl;
    }
}

int main() {
    int V = 4; // Total number of vertices (0, 1, 2, 3)
    
    // Create an array (vector) of vectors to represent the adjacency list
    vector<vector<int>> adjList(V);

    // Add edges to recreate the graph from your example
    addEdge(adjList, 0, 1);
    addEdge(adjList, 0, 2);
    addEdge(adjList, 1, 2);
    addEdge(adjList, 2, 3);

    // Display the final adjacency list
    printGraph(adjList);
    int degree=degreeOfAvertexInUndirectedGraph(adjList,2);
    cout<<endl;
    cout<<"degree of 2 is: "<<degree;
    return 0;
}