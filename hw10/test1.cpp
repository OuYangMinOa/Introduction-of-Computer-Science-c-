#include <bits/stdc++.h>
using namespace std;

template<class T,size_t R, size_t C>
void show_mat(T (&A)[R][C]){
    for (int i=0;i<R;i++){
        for (int j=0;j<C;j++){
            printf("%6.2f ",A[i][j]);
        }
        cout<<endl;
    }
    cout<<endl;
}

template<class T,size_t R, size_t C>
void set_arr(T (&A)[R][C],int x_down,int x_up,int y_down,int y_up,int value){
    for (int i=x_down;i<=x_up;i++){
        for (int j=y_down;j<=y_up;j++){
            A[i][j] = value;
        }
    }
}


int main(void){
    double surface[10][10];
    double last_surface[10][10];
    memcpy(last_surface,surface,10*sizeof(*surface));
    set_arr(surface,0,9,0,9,15);
    set_arr(surface,1,8,1,8,0);
    surface[3][6] = 100;
    show_mat(surface);
    bool gogo = true;
    while(gogo){
        for (int i=1;i<9;i++){
            for (int j=1;j<9;j++){
                if (i!=3 or j!=6){
                    surface[i][j] = (surface[i+1][j]+surface[i][j+1]+surface[i-1][j]+surface[i][j-1])/4;
                }
            }
        }
        gogo = false;
        for (int i=0;i<9;i++){
            for (int j=0;j<9;j++){
                if (last_surface[i][j] != surface[i][j]){
                    gogo = true;
                }
            }
        }
        memcpy(last_surface,surface,10*sizeof(*surface));
    }
    show_mat(surface);


}