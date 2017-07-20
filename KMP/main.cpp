#include <iostream>
#include <set>

using namespace std;

int get_len(char *string){
    int i = 0;
    while(string[i] != '\0'){
        char s = string[i];
        i += 1;
    }
    return i;
}

int* build_next(char *pattern){
    int len = get_len(pattern);
    int *next = new int[len+1];
    next[0] = -1;
    int pre_pointer = -1;
    int pos_pointer = 0;

    while(pos_pointer < len) {
        if (pre_pointer == -1 or pattern[pos_pointer] == pattern[pre_pointer]) {
            next[++pos_pointer] = ++pre_pointer;
        } else {
            pre_pointer = next[pre_pointer];
        }
    }
    return next;
}

int valid_shift(char *string, char *pattern){
    int spointer = 0;
    int ppointer = 0;
    int slen = get_len(string);
    int plen = get_len(pattern);
    int * next;
    int valid = 0;
    next = build_next(pattern);

    while(spointer < slen){
        if(string[spointer] == pattern[ppointer]){
            if(ppointer == plen-1){
                //find one
                valid += 1;
                spointer++;
                ppointer = next[ppointer+1];
            }else{
                spointer++;
                ppointer++;
            }
        }else{
            ppointer = next[ppointer];
            if(ppointer == -1){
                ppointer = 0;
                spointer += 1;
            }
        }
    }
    return valid;
}

int main(){
    set<int> s;
    pair<set<int>::iterator, bool> temp = s.insert(1);
    cout << temp.second;
    temp = s.insert(1);
    cout << temp.second;

//    char pattern[] = "abab";
//    int plen = 4;
//    char string[] = "abababab";
//    int slen = 8;
//    char *p,*s;
//    p = new char[1000000];
//    s = new char[1000000];
//    cin>>s>>p;
//    cout<<valid_shift(s,p);
}