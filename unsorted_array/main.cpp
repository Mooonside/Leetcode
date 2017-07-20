#include <iostream>

using namespace std;

int divide(int *array,int begin,int end){
    int pivot = array[begin];

    while(begin < end){
        while(array[begin] <= pivot) begin++;
        while(array[end] >= pivot) end++;
        if(begin<end){
            int temp = array[begin];
            array[begin] = array[end];
            array[end] = temp;
        }
    }
}

void quicksort(int *array,int len){
    quicksort(array,0,len-1);
}

void quicksort(int* array,int begin, int end){
    if(begin >= end){
        return;
    }
    int mid = divide(array,begin,end);
    quicksort(array,begin,mid-1);
    quicksort(array,mid+1,end);
}

int main() {
    int len;
    cin>>len;

    int *array;
    array = new int[len];

    for(int i=0;i<len;i++) {
        cin >> array[i];
    }
    quicksort(array,len);
}