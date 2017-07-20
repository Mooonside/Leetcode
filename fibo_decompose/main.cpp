#include <iostream>
#include <cstring>

using namespace std;


int get_num(char *s,int &pos,int *array){
    if(pos<0)
        return -1;
    int temp = array[pos];
    int pointer = pos;
    while(pointer >= 0 && array[pointer] == temp){
        pointer--;
    }
    pointer = pointer + 1;

    int num = 0;
    for(int i = pointer;i<=pos;i++){
        num = 10 * num + s[i] - '0';
    }
    pos = pointer - 1;
    return num;
}

int valid(char* s,int pos,int* array){
    int a,b,c;
    c = get_num(s,pos,array);
    b = get_num(s,pos,array);
    a = get_num(s,pos,array);
    cout <<a <<' ' << b <<' '<<c<<endl;

    if(a == -1 or b==-1 or c==-1){
        //requires more number
        return 0;
    }else{
        if(c == a+b) return 1;
        else if(c > a+b) return -1;
        else return 2;//requires taking in
    }
}


bool search(char* s,int pos,int* array,int &num,int choice){
    //merge
    if(s[pos] == '\0'){
        if(valid(s,pos-1,array)==1){
            return true;
        }else{
            return false;
        }
    }

    if(choice==1){
        //let pos become new number
        array[pos] = array[pos-1]+1;
        int res = valid(s,pos,array);

        if(res == 1 or res == 0){
            num += res;
            if(search(s,pos+1,array,num,1))
                return true;
            num -= res;
            //if returns false continue search
        }else if(res == 2){
            if(search(s,pos+1,array,num,0))
                return true;
        }else return false;
    }

    array[pos] = array[pos-1];
    int res = valid(s,pos,array);

    if(res == 1 or res == 0){
        num += res;
        if(search(s,pos+1,array,num,1))
            return true;
        else
            num -= res;
            return false;
    }else if(res == 2){
        if(search(s,pos+1,array,num,0))
            return true;
        else
            return false;
    }
    else return false;
}




int main(){
    char s[] = "11235813213455";
    int len = strlen(s);
    int *array = new int[len];
    for(int i=0;i<len;i++){
        array[i] = -1;
    }
    array[0] = 0;
    int num = 0;
    int choice = 1;//two both
    cout<<search(s,1,array,num,choice)<<endl;
    cout<<num;
}