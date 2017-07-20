#include <iostream>
#include <stack>
#include <cstring>
#include <assert.h>

using namespace std;

double get_pop(stack<double> &s){
    double t = s.top();
    s.pop();
    return t;
}


double cal(double double1, double double2,char op){
    if(op == '+'){
        return double1 + double2;
    }else if(op == '-'){
        return double1 - double2;
    }else if(op == '*'){
        return double1 * double2;
    }else if(op == '/'){
        return double1 / double2;
    }else{
        return 0;
    }
}

int main() {
    char *exp;
    exp = new char[100000];

    stack<double> nums;
    stack<char> ops;

    while(cin.getline(exp,100000)){
        for(int i=0;i<strlen(exp);){
            double temp = 0;
            while(exp[i] >= '0' && exp[i] <='9'){
                temp = 10 * temp + exp[i] - '0';
                i += 1;
            }
            nums.push(temp);
            if(exp[i] == '+' || exp[i] == '-'){
                while(!ops.empty()){
                    double double2 = get_pop(nums);
                    double double1 = get_pop(nums);
                    char op = ops.top();
                    ops.pop();
                    double res = cal(double1,double2,op);
                    nums.push(res);
                }
                ops.push(exp[i]);
            }else if(exp[i] == '*' || exp[i] == '/'){
                while(!ops.empty() && (ops.top() == '*' || ops.top() == '/')){
                    double double2 = get_pop(nums);
                    double double1 = get_pop(nums);
                    char op = ops.top();
                    ops.pop();
                    double res = cal(double1,double2,op);
                    nums.push(res);
                }
                ops.push(exp[i]);
            }
            i += 1;
        }

        while(!ops.empty()){
            double double2 = get_pop(nums);
            double double1 = get_pop(nums);
            char op = ops.top();
            ops.pop();
            double res = cal(double1,double2,op);
            nums.push(res);
        }

        cout<<nums.top()<<endl;
        nums.pop();
    }
    return 0;
}