#include <bits/stdc++.h>
using namespace std;

// homework 11 question 2 
const int s = 100;
void mut(int A[s][s],int An,int Am,int B[s][s],int Bn,int Bm,int C[s][s]){
    // 先 D = AxB  再 C = D;
    // 這樣寫可以避免 C 跟 A 是同一個記憶體位址的問題
    // say for example:有人這樣CALL這個函數 mut(A,An,Am,A,An,Am,A);
    int D[An][Bm];
    for(int i=0;i<An;i++)
        for(int j=0;j<Bm;j++)
            D[i][j] = 0;

    for(int i=0;i<An;i++)
        for(int j=0;j<Bm;j++)
            for(int k=0;k<Am;k++)
                D[i][j] += A[i][k]*B[k][j];

    for(int i=0;i<An;i++)
        for(int j=0;j<Bm;j++)
            C[i][j] = D[i][j];
}

int main(void){
    string file = "a.txt"; // 開啟的檔案名稱
    string file_2="b.txt"; // 寫入的檔案名稱
 
    ifstream f;
    f.open(file); // 開啟要讀取的檔案

    int r,c;
    f>>r>>c; // 讀 row 跟 column
    int A[s][s];
    cout<<"A:\n"; 

    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            f>>A[i][j];
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

    if (r==c){ // 要為方陣才可做矩陣乘法
        mut(A,r,c,A,r,c,A); // A = A*A
        mut(A,r,c,A,r,c,A); // A = A*A*A*A
    }else{
        cout<<"can't define mutiply";
        return 0;
    }

    ofstream g;  
    g.open(file_2); // 開啟要寫入的檔案
    g<<r<<" "<<c<<endl; // 寫入 row 跟 column

    cout<<"\nA ^ 4:\n";
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            cout<<A[i][j]<<" ";
            g<<A[i][j]<<" "; // 寫入
        }
        cout<<endl;
        g<<endl; // 換行
    }

    



}