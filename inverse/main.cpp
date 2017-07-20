#include <iostream>

using namespace std;


void inverse(int a,int &inv){
    if(a<10){
        inv = 10*inv + a;
        return;
    }else{
        inv = 10 * inv + a % 10;
        inverse(a / 10, inv);
    }

}

int main(){
    int times;
    cin>>times;
    for(int i=0;i<times;i++){
        int a = 0;
        int b = 0;
        int c = 0;
        cin>>a>>b;
        c = a+b;
        int tinv = 0;
        inverse(c,tinv);

        int inva = 0;
        int invb = 0;
        int invc = 0;
        inverse(a,inva);
        inverse(b,invb);
        invc = inva + invb;

        if(invc == tinv){
            cout<<c<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}