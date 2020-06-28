#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

const int size = 5;
int bingo[size][size]; // bingo 矩陣
int le[size][size];    // 剩下的 bingo 矩陣

bool in(int *A,int n,int num){  // 檢查 num 是否在矩陣 A 裡面
    for (int i=0;i<n;i++){
        if (num==A[i])return true;
    }
    return false;
}

bool add_in(int user){ // 撿查使用者輸入的數字是否合法，
    int x=0,y=0;       // 如果合法就加進去
    bool is_in = false;
    for (int i=0;i<size;i++){
        for (int j=0;j<size;j++){
            if (bingo[i][j]==user){
                x=i;y=j;is_in=true;
            }
        }
    }
    if (le[x][y]==0 or !is_in){
        return false;
    }else{
        le[x][y]=0;
        return true;
    }
}

bool check(){ // 檢查是否 bingo了
    // 直的 橫的 一起檢查
    for (int i=0;i<size;i++){
        bool row_bin = true;
        bool col_bin = true;
        for (int j=0;j<size;j++){
            if (le[i][j]!=0){
                row_bin = false;
            }
            if (le[j][i]!=0){
                col_bin = false;
            }
        }
        if (row_bin){return row_bin;}
        if (col_bin){return col_bin;} 
    }

    // 檢查 斜的
    bool diag_1 = true;
    bool diag_2 = true;
    for (int i=0;i<size;i++){
        if (le[i][i]!=0){
            diag_1 = false;
        }
        if (le[i][size-1-i]!=0){
            diag_2 = false;
        }
    }
    if (diag_1){return diag_1;}
    if (diag_2){return diag_2;} 
    return false;
}

int main(){
    srand(time(NULL));

    // bingo 5*5 二維矩陣 大小
    int size_2 = size*size;

    // 製造 [1~size_2] 一維矩陣 
    int num[size_2];
    for (int i=0;i<size_2;i++)
        num[i] = i+1;

    //  把製造的數字們 互相隨機交換
    for (int i=0;i<size_2;i++){
        int pos = rand();
        swap(num[i],num[pos%size_2]);
    }


    int now = size_2-1;

    // 依序把剛剛 隨機交換 過的數字放進去
    for (int i=0;i<size;i++){
        for (int j=0;j<size;j++){
            bingo[i][j] = num[now];
            le[i][j]  = num[now];
            now--;
            printf("%2d ",bingo[i][j]);
        }
        cout<<endl;
    }
    
    bool is_bingo = false;  // 還沒bingo
    int user_input;

    while (!is_bingo){
        cout<<"\nplz input your number "<<1<<"~"<<size_2<<endl;
        cin>>user_input;

        while (!add_in(user_input)){  // 加進去
            cout<<"\nyour input has some problem\n";
            cout<<"plz input again"<<1<<"~"<<size_2<<endl;
            cin>>user_input; // 不合法 要求 使用者 重新輸入
        }

        is_bingo = check();  // 檢查bingo了沒
        
    }

    cout<<"\nbingo!!!\n\n";


    for (int i=0;i<size;i++){
        for (int j=0;j<size;j++){
            printf("%2d ",le[i][j]);
        }
        cout<<endl;
    }

}