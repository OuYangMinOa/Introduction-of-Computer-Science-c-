#include <iostream>
using namespace std;

int main(void){
    int A[3][3] = {{1, 2, 1},{0,1,0},{3,5,-1}};
    int B[3][3];
    int C[3][3];

    // B = A*A
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int sum=0;
            for(int k=0;k<3;k++){
                sum += A[i][k]*A[k][j];
            }
            B[i][j] = sum;
        }
    }

    
    //cout B (A*A)
    cout<<"A^2 : "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    // C = B*B = A*A*A*A
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int sum=0;
            for(int k=0;k<3;k++){
                sum += B[i][k]*B[k][j];
            }
            C[i][j] = sum;
        }
    }

    // B = C*A = A*A*A*A*A
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int sum=0;
            for(int k=0;k<3;k++){
                sum += C[i][k]*A[k][j];
            }
            B[i][j] = sum;
        }
    }

    // cout B (A*A*A*A*A)
    cout<<"A^5 : "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }

}