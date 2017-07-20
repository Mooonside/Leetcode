#include <iostream>
#include <vector>

using namespace std;

int solve(int n,int &i,int& ans,int a){
    int f = i;
    while(i<=n){
        if(f * i < 0 ){
            break;
            //cout<<"overflow!"<<endl;
        }
        f *= i;

        while(f % a == 0){
            ans += 1;
            f /=  a;
        }
        i += 1;
    }
    return f;
}

int main(){
    int n,a;
    while(cin>>n>>a){
        int start = 1;
        int ans = 0;
        while(true){
            int f = solve(n,start,ans,a);
            cout << f << endl;
            if(start == n)
                break;
        }
    }
}