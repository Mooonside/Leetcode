#include <iostream>

using namespace std;

int main(){
    int times;
    cin>>times;
    for(int i=0;i<times;i++){
        int len1,len2;
        cin>>len1>>len2;
        int *array1,*array2;
        array1 = new int[len1];
        array2 = new int[len2];

        for(int j=0;j<len1;j++){
            cin>>array1[j];
        }

        for(int j=0;j<len2;j++){
            cin>>array2[j];
        }

        int a,b,c,d;
        cin>>a>>b>>c>>d;
        a --;
        b --;
        if(b>a){
            int temp = a;
            a = b;
            b = a;
        }
        c --;
        d --;
        if(c>d){
            int temp = c;
            c = d;
            d = temp;
        }

        int len = b - a + 1 + d - c + 1;
        if(len % 2 == 1){
            //the mid^th
            int mid = (1 + len) / 2;
            if(mid > b - a + 1){
                cout << array2[c + mid - (b -a + 1) -1] << endl;
            }else{
                cout << array1[a + mid - 1] << endl;
            }
        }else{
            int mid = len / 2;
            int t1,idx1;
            if(mid > b - a + 1){
                t1 =  array2[c + mid - (b -a + 1) -1];
                idx1 = c + mid - (b -a + 1) -1;
            }else{
                t1 =  array1[a + mid - 1];
                idx1 = a + mid - 1;
            }
            int t2,idx2;
            mid += 1;
            if(mid > b - a + 1){
                t2 =  array2[c + mid - (b -a + 1) -1];
                idx2 = c + mid - (b -a + 1) -1;
            }else{
                t2 =  array1[a + mid - 1];
                idx2 = a + mid - 1;
            }
            int t3 = idx1 < idx2 ? t1 : t2;
            cout << t3 << endl;
        }
        delete []array1;
        delete []array2;
    }
}
