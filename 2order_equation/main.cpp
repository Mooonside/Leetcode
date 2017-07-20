#include <iostream>
#include <math.h>
#include<iomanip>

using namespace std;

int main(){
    char * eq;
    eq = new char[100];
    while(true){
        if(cin.getline(eq,100)){
            //do nothing
        }else{
            break;
        }

        int order = -1;
        int coef = 0;
        int arr[3] = {0};
        int positive = 1;
        int left = 1;
        int i = 0;

        while(eq[i]!='\0'){
            if(eq[i] == 'x'){
                if(eq[i+1] == '^'){
                    order = eq[i+2] - '0';
                    i = i + 3;
                }
                else {
                    order = 1;
                    i = i + 1;
                }
                if(coef == 0)
                    arr[order] += positive * left;
                else
                    arr[order] += coef * positive * left;
                positive = 1;
                coef = 0;
            }else if(eq[i] >= '0' && eq[i] <= '9'){
                while(eq[i]!='\0' && eq[i] >= '0' && eq[i] <= '9'){
                    coef = eq[i] - '0' + 10 * coef;
                    i += 1;
                }
                if(eq[i] == '\0' or eq[i] != 'x'){
                    arr[0] += coef * positive * left;
                    coef = 0;
                    positive = 1;
                }
            }else if(eq[i] == '='){
                left = -1;
                i += 1;
            }else if(eq[i] == '-'){
                positive = -1;
                i += 1;
            }else{
                i += 1;
            }
        }

//        for(int i=0;i<3;i++){
//            cout<<arr[i]<<" ";
//        }

        double delta = arr[1] * arr[1] - 4.0 * arr[0] * arr[2];
        if(delta < 0){
            cout<<"No Solution\n"<<endl;
        }else{
            double x1 = -arr[1] + sqrt(delta);
            double x2 = -arr[1] - sqrt(delta);
            x1 /= 2 * arr[2];
            x2 /= 2 * arr[2];
            cout<<setiosflags(ios::fixed);
            cout.precision(2);
            if(x1 < x2){
                cout<<x1<<" "<<x2<<endl;
            }else{
                cout<<x2<<" "<<x1<<endl;
            }
        }
    }
    return 0;
}

/*
x^2+x=3x+4
x^2+x=3x+4
x^2+x=3x+4
x^2+x=3x+4
x^2+x=3x+4



 */