#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std;

class BigInt{
public:
    vector<int> bigint;
    bool positive;
    int len;

    BigInt(string s){
        bigint.clear();
        len = 0;

        int i = 0;
        if(s[0] == '-') {
            positive = false;
            i = 1;
        }else{
            positive = true;
        }

        while(s[i]=='0') {
            i++;
        }

        if(s[i] == '\0'){
            bigint.push_back(0);
            len = 1;
        }else{
            for(;s[i]!='\0';i++){
                bigint.push_back(s[i]-'0');
                len ++;
            }
        }
    }

    BigInt(){
        len = 0;
        bigint.clear();
        positive = true;
    }

    BigInt(const BigInt &B){
        bigint.clear();
        len = B.len;
        positive = B.positive;
        for(int i=0;i<len;i++){
            bigint.push_back(B.bigint[i]);
        }
    }

    BigInt& operator= (const BigInt &B){
        this->len = B.len;
        this->positive = B.positive;
        this->bigint.clear();
        for(int i=0;i<len;i++){
            this->bigint.push_back(B.bigint[i]);
        }
        return *this;
    }

    BigInt add(const BigInt &int2)const {
        BigInt int3;
        if(this->positive != int2.positive){
            if(this->positive){
                BigInt temp = BigInt(int2);
                temp.positive = true;
                return this->sub(temp);
            }else{
                BigInt temp = BigInt(*this);
                temp.positive = true;
                return int2.sub(temp);
            }
        }else{
            int3.positive = this->positive;
            int3.len = 0;
            int3.bigint.clear();
        }

        int len1 = this->len;
        int len2 = int2.len;

        int i = len1 -1;
        int j = len2 -1;
        int overflow = 0;

        while(i >= 0 && j >= 0){
            int res = this->bigint[i] + int2.bigint[j] + overflow;
            if(res > 9){
                overflow = 1;
                res = res % 10;
            }
            else overflow = 0;
            int3.bigint.push_back(res);
            int3.len ++;
            --i;
            --j;
        }

        while(i >= 0){
            int res = this->bigint[i] + overflow;
            if(res > 9){
                overflow = 1;
                res = res % 10;
            }else overflow = 0;
            int3.bigint.push_back(res);
            int3.len ++;
            --i;
        }

        while(j>=0){
            int res = int2.bigint[j] + overflow;
            if(res > 9){
                overflow = 1;
                res = res % 10;
            }else overflow = 0;
            int3.bigint.push_back(res);
            int3.len ++;
            --j;
        }

        if(overflow){
            int3.bigint.push_back(overflow);
            int3.len ++;
        }

        while(int3.bigint.back() == 0 && int3.len > 1){
            int3.bigint.pop_back();
            --int3.len;
        }

        reverse(int3.bigint.begin(),int3.bigint.end());
        return int3;
    }

    void show(){
        long len = this->len;
        if(!this->positive){
            cout<<'-';
        }

        for(long i=0;i<len;i++){
            cout<<this->bigint[i];
        }
    }

    bool ge(const BigInt &int2)const {
        //same positive
        if(this -> positive == int2.positive){
            if(this->len > int2.len){
                return this->positive;
            }
            else if(this->len < int2.len){
                return !this->positive;
            }else{
                int len1 = this->len;
                int len2 = int2.len;
                int i = 0;
                int j = 0;
                while(this->bigint[i] == int2.bigint[j]){
                    i ++;
                    j ++;
                    if(i == len1){//equal
                        return true;
                    }
                }
                return this->bigint[i] > int2.bigint[j] == this->positive;
            }
        }else{
            return this->positive;
        }
    }

    friend ostream& operator<<(ostream& os,const BigInt &B){
        long len = B.len;
        if(!B.positive){
            os<<'-';
        }

        for(long i=0;i<len;i++){
            os<<B.bigint[i];
        }
        return os;
    }

    BigInt sub(const BigInt &int2)const {
        if(this->positive && int2.positive){
            if(!this->ge(int2)){
                BigInt temp = int2.sub(*this);
                temp.positive = false;
                return temp;
            }
        }else if(this -> positive && !int2.positive){
            BigInt temp = BigInt(int2);
            temp.positive = true;
            return this->add(temp);
        }else if(!this ->positive && int2.positive){
            BigInt temp = BigInt(*this);
            temp.positive = true;
            BigInt temp2 = temp.add(int2);
            temp2.positive = false;
            return temp2;
        }else{
            BigInt temp = BigInt(int2);
            temp.positive = true;
            return temp.add(*this);
        }

        int i = this->len - 1;
        int j = int2.len - 1;

        BigInt int3;
        int3.len = 0;
        int3.positive = true;
        int3.bigint.clear();

        int overflow = 0;
        while (i >= 0 && j >= 0) {
            int res = this->bigint[i] - int2.bigint[j] - overflow;
            if (res < 0) {
                overflow = 1;
                res += 10;
            } else overflow = 0;
            int3.bigint.push_back(res);
            ++int3.len;
            i--;
            j--;
        }

        while (i >= 0){
            int res = this->bigint[i] - overflow;
            if (res < 0) {
                overflow = 1;
                res += 10;
            } else overflow = 0;
            int3.bigint.push_back(res);
            ++int3.len;
            i--;
        }

        while(int3.bigint.back() == 0 && int3.len > 1){
            int3.bigint.pop_back();
            --int3.len;
        }

        reverse(int3.bigint.begin(), int3.bigint.end());
        return int3;
    }

};

void multiply(vector<int> &int1, vector<int> &int2,vector<int> &int3) {
    int len1 = int1.size();
    int len2 = int2.size();

    for (int i = 0; i < len1 + len2; i++) {
        int3.push_back(0);
    }

    for (int i = 0; i < len1; i++) {
        for (int j = 0; j < len2; j++) {
            int res = int1[i] * int2[j];
            int3[i + j + 1] += res;
            int k = 0;
            while (int3[i + j + k + 1] > 9) {
                int temp = int3[i + j + k + 1];
                int3[i + j + k + 1] = temp % 10;
                int3[i + j + k ] += temp / 10;
                k -= 1;
            }
        }
    }

    vector<int>::iterator begin3 = int3.begin();
    while(*begin3 == 0){
        begin3 ++;
    }
    int3.begin() = begin3;
}

int main(){
    string str1,str2;
    cin>>str1;
    cin>>str2;


    BigInt int1 = BigInt(str1);
    BigInt int2 = BigInt(str2);
    BigInt int3 = int1.sub(int2);
    int3.show();
    return 0;
}