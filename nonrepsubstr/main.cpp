#include <iostream>
#include <cstring>
#include <set>



using namespace std;

int main()
{
    char *s;
    s = new char[1000000];
    cin>>s;

    set<char> myset;
    int i = 0;
    int mlen = 0;
    int clen = 0;
    int cstart = 0;

    for(int i=0;s[i]!='\0';i++){
        if(myset.find(s[i]) == myset.end()){
            clen++;
            myset.insert(s[i]);
        }else{
            //cout<<clen;
            if(clen > mlen){
                mlen = clen;
            }
            while(s[cstart] != s[i]){
                myset.erase(s[cstart]);
                cstart++;
                clen--;
            }
            cstart++;
        }
    }

    if(clen > mlen){
        mlen = clen;
    }

    cout<<mlen;

    return 0;
}
