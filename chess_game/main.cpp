#include <iostream>
#include <vector>

using namespace std;

int sx,ex,sy,ey;
int xunit,yunit;
int minc;
int **array;

void search(int cx,int cy,int cost,int status){
    if(cx == ex && cy == ey){
        if(cost < minc)
            minc = cost;
        return;
    }

    if(cx != ex){
        int delta = status * array[cx+xunit][cy];
        search(cx+xunit,cy,cost+delta,delta%4+1);
    }

    if(cy != ey){
        int delta = status * array[cx][cy+yunit];
        search(cx,cy+yunit,cost+delta,delta%4+1);
    }
}



int main() {
    array = new int*[6];

    for(int i=0;i<6;i++){
        array[i] = new int[6];
    }
    int times;
    cin>>times;

    for(int p=0;p<times;p++){
        for(int i=0;i<6;i++){
            for(int j=0;j<6;j++){
                cin >> array[i][j];
            }
        }

        minc = 100000;

        cin>>sx>>sy>>ex>>ey;

        xunit = sx < ex ? 1: -1;
        yunit = sy < ey ? 1: -1;
        search(sx,sy,0,1);
        cout << minc<<endl;
    }
    return 0;
}