#include<iostream>
#include<vector>
using namespace std;
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
void detectGraphAnomalies(const vector<vector<int>> &adjList){
    int v = adjList.size();
    bool selfEdge = false;
    bool multiEdge = false;
    vector<bool> seen(v,false);
    for(int i=0;i<v;i++){
        fill(seen.begin(), seen.end(), false);
        for(int neighbour :adjList[i]){
            if(i == neighbour){
                selfEdge =true;
                cout<<"self edge is present between vertix "<<i<<"to "<<neighbour<<endl;
            }
            
            if(seen[neighbour]==true){
                cout<<"There is a multiedge between vertex "<<i<<"and "<<neighbour<<endl;
                multiEdge = true;
            }
            else{
                seen[neighbour]=true;
            }

        }
        
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
    detectGraphAnomalies(adjList);
    return 0;
}