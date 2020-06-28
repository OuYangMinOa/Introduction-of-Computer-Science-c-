#include <iostream>
#include <cmath>
#include <fstream>
#include <ctime>
using namespace std;

int change(int n){
    if     (n==1){return 14;}
    else if(n==2){return 15;}
    else         {return  n;}
}

void sort(int* card,int up,int down){ //氣泡排序法
    for (int i=up;i<down;i++)
        for(int j=up;j<down-1-i+up;j++) 
            if (change(card[j+1]%13+1)<change(card[j]%13+1)) //把1,2 換成 14,15
                swap(card[j+1],card[j]);
}

void shuffle(int *card,int n){
    // 製作從 0 ~ 51 的矩陣 - 代表的是 52張牌 
    for (int i=0;i<n;i++)
        card[i] = i;
    // 52張牌都隨機跟別張牌交換
    for (int i=0;i<n;i++){
        int pos = rand();
        swap(card[i],card[pos%n]);
    }
}

void show_num(int n){
    int num = n%13+1;
    if      (num==11){cout<<"\tJ";}
    else if (num==12){cout<<"\tQ";}
    else if (num==13){cout<<"\tK";}
    else             {cout<<"\t"<<num;}
}

void show_Suit(int n){
    if     (n%4==0){cout<<" club \n";}
    else if(n%4==1){cout<<" diamond \n";}
    else if(n%4==2){cout<<" heart \n";}
    else if(n%4==3){cout<<" spade \n";}
}

void show_card(int *card,int up,int down){
    sort(card,up,down); // 幫玩家整理牌，從小排到大 3~k~1~2
    for (int i=up;i<down;i++){
        show_num(card[i]); // show 數字
        show_Suit(card[i]); // show 花色
    }
}


int main(void){
    srand(time(NULL));
    int card[52] = {0};
    shuffle(card,52);  // 洗牌 
    for (int i=1;i<=4;i++){  //cout出4個玩家的牌 0~13, 14~26, 27~39, 40~52
        cout<<"Player "<<i<<" :"<<endl; 
        show_card(card,13*(i-1),13*i); // call show的函數
        cout<<endl;
    }
}