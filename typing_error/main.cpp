#include <iostream>
#include <string.h>
#include <map>

using namespace std;


int main() {

    char line1[] = "QWERTYUIOP[]\\";
    char line2[] = "ASDFGHJKL;'";
    char line3[] = "ZXCVBNM,./";
    char line4[] = "`1234567890-=";

    map<char,char> rmapping;

    for(int i=0;i<strlen(line1)-1;i++){
        rmapping[line1[i+1]] = line1[i];
    }

    for(int i=0;i<strlen(line2)-1;i++){
        rmapping[line2[i+1]] = line2[i];
    }
    for(int i=0;i<strlen(line3)-1;i++){
        rmapping[line3[i+1]] = line3[i];
    }
    for(int i=0;i<strlen(line4)-1;i++){
        rmapping[line4[i+1]] = line4[i];
    }

    char * input;
    input = new char[1000000];
    while(true){
        if(cin.getline(input,1000000)){
            //do nothing
        }else{
            break;
        }

        for(int i=0;i<strlen(input);i++){
            bool capital = true;
            if(input[i]>='a' && input[i]<='z'){
                capital =false;
            }
            char key = input[i];

            if(!capital){
                key = input[i] - 'a' + 'A';
            }

            char out;
            if(rmapping.find(key) != rmapping.end()){
                out = rmapping[key];
                if(out>='a' && out <= 'z'){
                    if(capital){
                        out = out - 'a' + 'A';
                    }
                }
                cout << out;
            }else{
                cout << input[i];
            }
        }
        cout << endl;
    }
    return 0;
}