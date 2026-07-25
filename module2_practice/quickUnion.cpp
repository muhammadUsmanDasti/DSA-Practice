#include<iostream>
#include<vector>
using namespace std;
class quickUnion {
private:
    vector<int> id;
    int root(int p) {
        while(id[p] != p) {
            p = id[p];
        }
        return p;
    }
public:
    quickUnion(int n) {
        id.resize(n);
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
        id[i] = j;
    }
    void idPrint() const {
        for(int i = 0; i < id.size(); i++) {
            cout<< id[i]<<" , ";
        }
        cout<<endl;
    }
};


int main() {
    quickUnion UF(10);
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
     return 0;

}