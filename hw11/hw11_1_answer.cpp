#include <iostream>
using namespace std;

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

int main(){
    int A[s][s],B[s][s],C[s][s];
    int An,Am;
    int Bn,Bm;

    // 輸入 A
    cout<<"plz input A size\n";
    cin>>An>>Am;
    cout<<"input A:\n";
    for(int i=0;i<An;i++)
        for(int j=0;j<Am;j++)
            cin>>A[i][j];
    
    // 輸入 B
    cout<<"plz input B size\n";
    cin>>Bn>>Bm;

    // 要 Am == Bn 才可以做矩陣運算
    if (Am!=Bn){
        cout<<"can't define AB";
        return 1;
    }
    // 輸入 B
    cout<<"input B:\n";
    for(int i=0;i<Bn;i++)
        for(int j=0;j<Bm;j++)
            cin>>B[i][j];


    // 丟給函數做運算
    mut(A,An,Am,B,Bn,Bm,C);

    // cout C
    cout<<"C_("<<An<<"x"<<Bm<<"):\n";
    for(int i=0;i<An;i++){
        for(int j=0;j<Bm;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }

}