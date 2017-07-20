#include <iostream>
#include <stack>

using namespace std;


int rec_ackerman(int m,int n){
    if(m==0){
        return n + 1;
    }else if(n==0){
        return rec_ackerman(m-1,1);
    }else{
        return rec_ackerman(m-1,rec_ackerman(m,n-1));
    }
}

int non_ackerman(int m,int n){
    stack<int> mstack;
    stack<int> nstack;
    mstack.push(m);
    nstack.push(n);

    while(!mstack.empty()){
        if(mstack.top() == 0) {
            mstack.pop();
            int t = nstack.top();
            //cout<<0<<" "<<t<<endl;
            nstack.pop();
            nstack.push(t+1);
        }else if(nstack.top()==0){
            nstack.pop();
            int t = mstack.top();
            mstack.pop();
            //cout<<t<<" "<<0<<endl;
            mstack.push(t-1);
            nstack.push(1);
        }else{
            int t1 = mstack.top();
            mstack.pop();
            int t2 = nstack.top();
            nstack.pop();
            //cout<<t1<<" "<<t2<<endl;
            mstack.push(t1-1);
            mstack.push(t1);
            nstack.push(t2-1);
        }
    }
    return nstack.top();
}



int main(){
    int n,m;
    cin>>m>>n;
    cout<<non_ackerman(m,n)<<endl;
    return 0;
}