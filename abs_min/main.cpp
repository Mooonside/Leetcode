#include <iostream>
#include <stdlib.h>

using namespace std;

int cmp(const void *a,const void *b){
    return (*(int *)a-*(int *)b) > 0 ? 1:-1;
}

int main() {
    int array1[] = {3,2,1,-1,5,6};
    int array2[] = {0,23,7,1,2,3};

    qsort(array1,6,sizeof(array1[0]),cmp);
    qsort(array2,6,sizeof(array2[0]),cmp);

    int sum = 0;
    for(int i=0;i<6;i++){
        sum += abs(array1[i] - array2[i]);
    }
    cout<<sum<<endl;
    return 0;
}