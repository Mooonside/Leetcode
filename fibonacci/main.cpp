#include <iostream>

using namespace std;

int main() {

    int *array = new int[30+1];
    array[0] = 0;
    array[1] = 1;

    int i = 2;
    while(i<=30){
        array[i] = array[i-1]+array[i-2];
        i++;
    }

    int times;
    while(cin>>times){
        cout<<array[times]<<endl;
    }
}