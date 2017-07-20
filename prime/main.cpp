#include <iostream>
#include <vector>


using namespace std;

int main() {
    int num = 110000;

    bool *table;
    table = new bool[num+1];

    table[0] = false;
    table[1] = false;

    for(int i=2;i<=num;i++){
        table[i] = true;
    }

    for(int i=2;i<=num;i++){
        if(table[i]){
            int k = 2;
            while(i*k <= num){
                table[i*k] = false;
                k += 1;
            }
        }
    }

    vector<int> prime;

    for(int i=2;i<=num;i++){
        if(table[i]){
            prime.push_back(i);
        }
    }
    //cout<<prime.size();
    while(cin>>num){
        cout<<prime[num-1]<<endl;
    }

    return 0;
}