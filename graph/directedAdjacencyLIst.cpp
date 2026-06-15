#include<iostream>
#include<vector>
using namespace std;
int outDegree(const vector<vector<int>> &adjList,int vertex){
    return adjList[vertex].size();
}
int inDegree(const vector<vector<int>> &adjList,int vertex){
    int inDegree=0;
    for(int i=0;i<adjList.size();i++){
        for(int neighbour : adjList[i]){
            if(neighbour==vertex){
                inDegree++;
            }
        }
    }
    return inDegree;
}
void addEdge(vector<vector<int>> &adjList,int u,int v){
    adjList[u].push_back(v);
}
void printAdjacencyList(const vector<vector<int>> &adjList){
    for(int i=0;i<adjList.size();i++ ){
        cout<<i;
        for(int neighbour : adjList[i]){
            cout<<"->"<<neighbour;
        }
        cout<<endl;
    }
}
int main(){
    int V,E;
    cout<<"Enter the number of vertices: ";
    cin>>V;
    cout<<"Enter the number of Edges: ";
    cin>>E;
    vector<vector<int>> adjList(V);
    for(int i=0;i<E;i++){
        int u,v;
        cout<<"Enter the edge: (start,end): ";
        cin>>u>>v;
        addEdge(adjList,u,v);
        
    }
    printAdjacencyList(adjList);
    cout<<endl;
    int indegree=0,outdegree=0;
    outdegree = outDegree(adjList,2);
    cout<<"Out Degree: "<<outdegree<<endl;
    indegree = inDegree(adjList,2);
    cout<<"In Degree: "<<indegree;
    return 0;

}