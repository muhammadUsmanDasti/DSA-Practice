#include<iostream>
#include<vector>
using namespace std;
class weightedQuickUnion {
private:
    vector<int> id;
    vector<int> sz;
    int root(int p) {
        while(p != id[p]) {
            id[p] = id[id[p]];
            p = id[p];
        }
        return p;
    }
public:
    weightedQuickUnion(int n) {
        id.resize(n);
        sz.resize(n, 1);
        for(int i = 0; i < n; i++) {
            id[i] = i;
        }
    }
    bool connected(int p, int q) {
        return root(p) == root(q);
    }
    void unite(int p, int q) {
        int i = root(p);
        int j = root(q);
        if(i == j) {
            return;
        }
        if(sz[i] <= sz[j]) {
            id[i] = j;
            sz[j] += sz[i];
        }
        else {
            id[j] = i;
            sz[i] += sz[j];
        }
    }
    void idPrint() {
        for(int i = 0; i < id.size(); i++) {
            cout<<id[i]<<" , ";
        }
        cout<<endl;
    }
};
int main() {
    weightedQuickUnion UF(10);
    UF.unite(4, 3);
    UF.idPrint();
    UF.unite(3, 8);
    UF.idPrint();
    UF.unite(6, 5);
    UF.idPrint();
    UF.unite(9, 4);
    UF.idPrint();
    UF.unite(2, 1);
    UF.idPrint();


    if(UF.connected(8, 9)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    if(UF.connected(5, 0)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
 
}