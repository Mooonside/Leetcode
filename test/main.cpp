#include <iostream>

using namespace std;

int factoriol(int n){
    int i = 1;
    int f = 1;
    while(i<=n)	f *= i++;
    return f;
}

int main(){
    int n,a;
    while(cin>>n>>a){
        int f = factoriol(n);
        int ans = 0;
        while(f % a){
            ans += 1;
            f /= a;
        }
        cout<<ans<<endl;;
    }
}