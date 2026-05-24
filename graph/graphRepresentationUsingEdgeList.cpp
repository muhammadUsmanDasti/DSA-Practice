#include<iostream>
#include<vector>
using namespace std;


class edge{
    int startVertex;
    int endVertex;
    int weight;
};
int main(){
    vector<string> vertexList;
    vector<edge> edgeList;
    int v,e;
    cout<<"Enter the number of vertices: ";
    cin>>v;
    cout<<"Enter the number of edges: ";
    cin>>e;
    int start,end;
    for(int i=0;i<e;i++){
        
        cout<<"Enter the edge start node: ";
        cin>>start;
        edgeList[i].startVertex =
    }
    return 0;
}