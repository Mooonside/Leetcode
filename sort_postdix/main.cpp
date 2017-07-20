#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int cmp(const void *a,const void *b){
    char *s1 = *(char**) a;
    char *s2 = *(char**) b;
    int l1 = strlen(s1);
    int l2 = strlen(s2);
    int len = l1<l2?l1:l2;

    for(int i=0;i<len;i++) {
        if (s1[i] != s2[i]) {
            return s1[i] > s2[i] ? 1 : -1;
        }
    }
    return l1 >= l2 ? 1 : -1;
}

int main(){
    char *s;
    s = new char[1000000];

    while(cin>>s){
        int len = strlen(s);

        char* *array;
        array = new char* [len];
        for(int i=0;i<len;i++){
            array[i] = s;
            s ++;
        }
        qsort(array,len,sizeof(array[0]),cmp);

        for(int i=0;i<len;i++){
            cout<<array[i]<<endl;
        }
        delete []array;
    }
}

