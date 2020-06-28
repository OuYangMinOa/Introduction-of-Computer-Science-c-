#include <iostream>
#include <cmath>
#include <fstream>
#include <ctime>
using namespace std;

// 這題我也有把分布圖畫出來，放在tronclass上

int main(void){
    srand(time(NULL));

    string file = "pro.txt";

    ofstream f;

    f.open(file);
    
    int walks = 50000;
    int steps = 100;
    int pos;

    double N[steps+5]={0}; // -99 ~ 5

    for (int walk=0;walk<walks;walk++){
        int x=0, y=0;
        for (int step=0;step<steps;step++){
            if (x!=5){pos = rand()%4;} // 如果不再牆邊
            else{pos = rand()%3;} // 如果撞到牆了
            if (pos==0){x--;}
            if (pos==1){y--;}
            if (pos==2){y++;}
            if (pos==3){x++;}
        }
        N[x+steps-1]++;
    }   


    for (int i=0;i<105;i++){
        cout<<i-99<<" "<<N[i]/walks<<endl;
        f<<i-99<<" "<<N[i]/walks<<endl;
    }

    
}   