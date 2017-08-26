#include <iostream>
#include <string>

using namespace std;

int CharToDec(char ch){
    if(ch >= '0' && ch <= '9')
        return ch - '0';
    else if(ch >= 'A' && ch <= 'Z')
        return ch - 'a' + 10;
    else if(ch >= 'a' && ch <= 'z')
        return ch - 'a' + 35;
    else
        return -1;
}

char DecToChar(int i){
    if( i >= 0 && i <= 9)
        return '0' + i;
    else if( i >= 10 && i <= 35)
        return 'A' + i - 10;
    else if( i >= 36 && i <= 61 )
        return 'a' + i - 36;
    else
        return '#';
}

char modular(string &input,int src,int dst){
    string quotient = "";
    int tmp = 0;

    for(int i=0;i<input.length();i++){
        tmp = tmp * src + CharToDec(input[i]);
        quotient += DecToChar(tmp / dst);
        tmp = tmp % dst;
    }
    int i = 0;
    while( quotient[i] == '0' ) i++;
    // move lead zeros of quotient
    input = quotient.substr(i,quotient.length()-i);
    return DecToChar(tmp);
}

int main()
{

    int src;
    int dst;
    string input;
    cin>>src>>dst>>input;
    string output = "";
    while(input.length()>0){
        char mod = modular(input,src,dst);
        output = mod + output;
    }

    cout << output << endl;
    return 0;
}
