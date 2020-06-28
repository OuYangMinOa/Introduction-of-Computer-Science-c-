#include <bits/stdc++.h>
using namespace std;

template<size_t R, size_t C>
void show_mat(int (&A)[R][C]){
    for (int i=0;i<R;i++){
        for (int j=0;j<C;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}

template<size_t Am, size_t An,size_t Bm, size_t Bn,size_t Cm, size_t Cn>
void func(int (&A)[Am][An],int (&B)[Bm][Bn], int (&C)[Cm][Cn]){
    int D[Cm][Cn] = {0};
    for (int i=0;i<Cm;i++){
    for (int j=0;j<Cn;j++){
        int sum=0;
        for (int k=0; k<Bm;k++){
            D[i][j] += A[i][k] * B[k][j];
        }
    }
    }
    memcpy(C,D,Cm*Cn*sizeof(**A));
}




int main(void){
    int A[3][4] = {{1,2,1,2},{0,1,0,3},{3,5,-1,5}};
    int B[4][3] = {{1,2,1},{0,1,0},{3,5,-1},{1,1,1}};
    int C[3][3];
    //show_mat(A);

    func(A,B,C); // C = A*A
    //func(C,C,C); // C = A*A*A*A
    //func(A,C,C); // C = A*A*A*A*A

    show_mat(C);

 


}