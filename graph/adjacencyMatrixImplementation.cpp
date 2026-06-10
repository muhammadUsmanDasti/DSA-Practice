//Question:Write a program to represent an undirected graph using an adjacency matrix.
//requirements
//• Take number of vertices from user  
//• Take number of edges from user  
//• Input edges one by one  
//• Build adjacency matrix  
//• Display the matrix clearly 
#include<iostream>
using namespace std;
void adjacencyMatrix(){
    int no_of_vertices;
    int no_of_edges;
    cout<<"Enter the number of vertices: ";
    cin>>no_of_vertices;
    cout<<"Enter the number of edges: ";
    cin>>no_of_edges;
    int adjacencyMatrix[no_of_vertices][no_of_vertices];
    for(int i=0;i<no_of_vertices;i++){
        for(int j=0;j<no_of_vertices;j++){
            adjacencyMatrix[i][j]=0;
        }
    }
    for(int i=0;i<no_of_edges;i++){
        int start,end;
        cout<<"Enter the edge: "<<endl;
        cout<<"Start: ";
        cin>>start;
        cout<<"End: ";
        cin>>end;
        adjacencyMatrix[start][end]=1;
        adjacencyMatrix[end][start]=1;
    }
    for(int i=0;i<no_of_vertices;i++){
        for(int j=0;j<no_of_vertices;j++){
            cout<<adjacencyMatrix[i][j];
        }
        cout<<endl;
    }

}

//now implementation using the vectors
#include<vector>
void adjacencyMatrix1() {
    int no_of_vertices;
    int no_of_edges;
    
    cout << "Enter the number of vertices: ";
    cin >> no_of_vertices;
    
    cout << "Enter the number of edges: ";
    cin >> no_of_edges;

    
    vector<vector<int>> matrix(no_of_vertices, vector<int>(no_of_vertices, 0));

    
    for(int i = 0; i < no_of_edges; i++) {
        int start, end;
        cout << "Enter edge " << i + 1 << " (Start End): ";
        cin >> start >> end;
        
        
        matrix[start][end] = 1;
        matrix[end][start] = 1;
    }

    cout <<endl << "Adjacency Matrix:"<<endl;
    for(int i = 0; i < no_of_vertices; i++) {
        for(int j = 0; j < no_of_vertices; j++) {
            
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    adjacencyMatrix1();
    return 0;
}
