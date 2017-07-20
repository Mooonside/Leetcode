#include <iostream>

using namespace std;

int *b;
int *con;

void merge(int *a,int left,int mid,int right){
    int *temp;
    int *ctemp;
    int *btemp;
    temp = new int[right-left+1];
    ctemp = new int[right-left+1];
    btemp = new int[right-left+1];

    int p1 = left;
    int p2 = mid+1;

    int k = 0;
    while(p1<=mid && p2<=right){
        if(a[p1] < a[p2]){
            btemp[k] = b[p1] + right - p2 + 1;
            ctemp[k] = con[p1];
            temp[k++] = a[p1++];
        }else{
            btemp[k] = b[p2];
            ctemp[k] = con[p2];
            temp[k++] = a[p2++];
        }
    }

    while(p1<=mid){
        ctemp[k] = con[p1];
        btemp[k] = b[p1];
        temp[k++] = a[p1++];
    }
    while(p2<=right){
        ctemp[k] = con[p2];
        btemp[k] = b[p2];
        temp[k++] = a[p2++];
    }

    for(int i=left;i<=right;i++){
        a[i] = temp[i-left];
        b[i] = btemp[i-left];
        con[i] = ctemp[i-left];
    }

    delete []temp;
    delete []btemp;
    delete []ctemp;
    return;
}

void merge_sort(int *a,int left,int right){
    int mid = (left+right) / 2;
    if(left==right)
        return;

    merge_sort(a,left,mid);
    merge_sort(a,mid+1,right);
    merge(a,left,mid,right);
}

int main() {
    int len;
    int *array;
    int *ans;

    cin>>len;

    array = new int[len];
    ans = new int[len];
    b = new int[len];
    con = new int[len];

    for(int i=0;i<len;i++){
        cin>>array[i];
        b[i] = 0;
        con[i] = i;
    }

    merge_sort(array,0,len-1);

    for(int i=0;i<len;i++){
        ans[con[i]] = b[i];
    }

    for(int i=0;i<len;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

/*
6
3 2 7 4 8 1

20
98  1  91  60  14  62  80  93  80  78  14  27  71  52  13  18  99  81  27  25
 */