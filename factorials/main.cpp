#include <iostream>

using namespace std;

void update(bool* array,long long shift,long long len){
    for(long long i=len;i>shift;i--){
        array[i] |= array[i-shift];
    }
    return;
}


int main(){
    long long num;

    while(cin>>num){
        bool *array = new bool[num+1];

        for(int i=0;i<=num;i++){
            array[num] = false;
        }

        long long i = 1;
        int count = 1;
        array[1] = true;

        while(i<=num){
            update(array,i,num);
            array[i] = true;
            count += 1;
            i = i * count;
        }

        if(array[num]){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}