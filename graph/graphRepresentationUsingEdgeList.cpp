// Task 3: Edge List Representation 
// Write a program to store the graph as an edge list. 
// Requirements 
// • Store each edge as a pair (u, v)  
// • Display all edges  
// Example Output 
// Edge List: 
// (0,1) 
// (0,2) 
// (1,2) 
// (2,3) 

#include<iostream>
#include<vector>
using namespace std;


struct edge{
        int startVertex;
        int endVertex;
};
vector<edge> createEdgeList(){
    vector<edge> edgeList;
    int v,e;
    cout<<"Enter the number of vertices: ";
    cin>>v;
    cout<<"Enter the number of edges: ";
    cin>>e;
    
    for(int i=0;i<e;i++){
        int start,end;
        cout<<"Enter the edge: "<<"(start end)";
        cin>>start>>end;
        edgeList.push_back({start,end});
    }
    return edgeList;
}
void displayEdgeList(const vector<edge>& edgeList){
    cout<<endl<<"Edge List: "<<endl;
    for(int i=0;i<edgeList.size();i++){
        cout<<"("<<edgeList[i].startVertex<<","<<edgeList[i].endVertex<<")"<<endl;
    }
}
int main(){
    vector<edge> edgeList = createEdgeList();
    displayEdgeList(edgeList);
    return 0;
}