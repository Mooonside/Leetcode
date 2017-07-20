#include <iostream>

using namespace std;

int main() {
    int num;
    int a,b,c;
    while(cin>>num>>a>>b>>c){
        int price = c*10 + b*100 + a*1000;
        int temp;
        int i = 9;
        int j = 9;
        bool find = false;

        for(;i>=1;i--){
            temp = price + i * 10000;
            j = 9;
            for(;j>=0;j--){
                if( (temp+j) % num == 0){
                    find = true;
                    break;
                }
            }
            if(find){
                break;
            }
        }

        if(find){
            price += i * 10000 + j;
            int avg = price / num;
            cout<<i<<' '<<j<<' '<<avg<<endl;
        }else{
            cout<<0<<endl;
        }
    }
    return 0;
}