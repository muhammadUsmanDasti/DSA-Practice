#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> createAdjacencyMatrix(){
    int v,e;
    cout<<"Enter the number of vertices: ";
    cin>>v;
    cout<<"Enter the number of edges: ";
    cin>>e;
    vector<vector<int>> adjacencyMatrix(v, vector<int>(v, 0));
    for(int i=0;i<e;i++){
        int start,end, weight;
        cout<<"Enter the "<<i<<" edge: (start,end,weight): ";
        cin>>start>>end>>weight;
        adjacencyMatrix[start][end] = weight;
        adjacencyMatrix[end][start] = weight;  //remove this for the directed graph
    }
    return adjacencyMatrix;

}
void displayAdjacencyMatrix(const vector<vector<int>>& adjacencyMatrix){
    for(int i=0;i<adjacencyMatrix.size();i++){
        for(int j=0;j<adjacencyMatrix.size();j++){
            cout<<adjacencyMatrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    vector<vector<int>> adjacencyMatrix = createAdjacencyMatrix();
    displayAdjacencyMatrix(adjacencyMatrix);
    return 0;
}