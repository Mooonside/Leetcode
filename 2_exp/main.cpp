#include <iostream>
#include <vector>

using namespace std;

void reduce_bin(int num, vector<int> &ans){
    int i = 0;
    while(num > 0){
        if(num % 2 == 1){
            ans.push_back(i);
        }
        i += 1;
        num = num / 2;
    }
}

void print(int num){
    if(num == 1){
        cout<<2;
        return;
    }else if(num == 0){
        cout<<"2(0)";
        return;
    }

    vector<int> ans;
    reduce_bin(num,ans);

    for(int i=ans.size()-1;i>0;i--){
        //cout<<"#"<<ans[i]<<"#";
        if(ans[i] == 0||ans[i] == 1){
            print(ans[i]);
        }
        else{
            cout<<"2(";
            print(ans[i]);
            cout<<")";
        }
        cout<<"+";
    }
    if(ans[0] == 0 ||ans[0] == 1){
        print(ans[0]);
    }else{
        cout<<"2(";
        print(ans[0]);
        cout<<")";
    }

}


int main() {
    int num;
    while(cin>>num){
        print(num);
        cout<<endl;
    }
}