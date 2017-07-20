#include <iostream>
#include <map>
#include <cstring>

using namespace std;

int main(){
    map<char,int> hashmap;

    char *s;
    s = new char[100000];
    while(cin>>s){
        int len = strlen(s);
        for(int i=0;i<len;i++){
            if(s[i]>='A' && s[i]<='Z'){
                if(hashmap.find(s[i]) != hashmap.end()){
                    hashmap[s[i]] += 1;
                }else{
                    hashmap[s[i]] = 1;
                }
            }
        }

        char a = 'A';
        for(int i=0;i<26;i++){
            char temp = (char)(a+i);
            int cnt = 0;
            if(hashmap.find(temp) != hashmap.end()){
                cnt = hashmap[temp];
            }
            cout << temp << ":" <<cnt<<endl;
        }

        hashmap.clear();
    }

    return 0;
}


