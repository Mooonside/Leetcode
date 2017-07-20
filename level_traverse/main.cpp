#include <iostream>

using namespace std;

int main() {
    int *parent,*lchild,*rchild;
    int len;
    cin>>len;

    lchild = new int[len+1];
    rchild = new int[len+1];
    parent = new int[len+1];

    for(int i=0;i<=len;i++){
        parent[i] = -1;
        lchild[i] = 0;
        rchild[i] = 0;
    }

    int p,l,r;
    while(cin>>p>>l>>r){
        lchild[p] = l;
        rchild[p] = r;
        parent[l] = p;
        parent[r] = p;
    }

    int root = 1;
    while(parent[root]!=-1){
        root = parent[root];
    }
    cout<<root<<endl;



}