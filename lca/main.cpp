#include <iostream>

using namespace std;

class union_set{
public:
    int *array;
    union_set(int len){
        //do not use the 0 element
        array = new int[len+1];
        for(int i=0;i<=len;i++){
            array[i] = -1;
        }
    }

    int find(int idx){
        if(array[idx] == -1) return idx;
        return array[idx] = find(array[idx]);
    }

    void set_union(int idx1,int idx2){
        if(idx1 == 0 or idx2 == 0)
            return;
        array[idx1] = idx2;
    }
};

int *lchild,*rchild,*parent;

int lca(int root,int idx1,int idx2,union_set &myset){
    if(root == 0){
        return -1;
    }

    int ans = lca(lchild[root],idx1,idx2,myset);
    if(ans != -1){
        return ans;
    }

    ans = lca(rchild[root],idx1,idx2,myset);
    if(ans != -1){
        return ans;
    }
    myset.set_union(lchild[root],root);
    myset.set_union(rchild[root],root);

    int c1 = myset.find(idx1);
    int c2 = myset.find(idx2);
    if(c1 == c2){
        return root;
    }else{
        return -1;
    }
}

int main() {
    int len,times;
    cin>>len;
    lchild = new int[len+1];
    rchild = new int[len+1];
    parent = new int[len+1];

    for(int i=0;i<=len;i++){
        parent[i] = -1;
    }

    int query1,query2;
    cin>>query1>>query2;

    for(int i=0;i<len;i++){
        int lc,rc;
        cin>>lc>>rc;
        parent[lc] = i+1;
        lchild[i+1] = lc;
        rchild[i+1] = rc;
    }
    int root = 1;
    while(parent[root]!=-1){
        root = parent[root];
    }

    union_set myset = union_set(len+1);
    cout<<lca(root,query1,query2,myset)<<endl;
}