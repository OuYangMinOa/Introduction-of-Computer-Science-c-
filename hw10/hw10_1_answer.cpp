#include <bits/stdc++.h>
using namespace std;

int main(void){
    double surface[10][10];
    double last_surface[10][10];
    // 初始化 
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if (0<i && i<9 && 0<j && j<9 ){
                surface[i][j]=50;
            }else{
                surface[i][j]=15;
            }
        }
    }
    surface[3][6] = 100;

    // 把 surface 的值複製給 last_surface
    memcpy(last_surface,surface,10*sizeof(*surface));

    // 你也可以用迴圈去做，像這樣 :
    // for(int i=0;i<10;i++){
    //     for(int j=0;j<10;j++){
    //         last_surface[i][j] = surface[i][j];
    //     }
    // }

    bool flag = true;
    while(flag){
        for(int i=1;i<9;i++){
            for(int j=1;j<9;j++){
                if (i!=3 or j!=6){ // 100 度不能變
                    surface[i][j] = (surface[i+1][j] + surface[i][j+1]+surface[i-1][j]+surface[i][j-1])/4;
                }
            }
        }

        // 檢查變化是否都小於 0.01，若有大於的，就繼續執行
        flag = false;
        for(int i=1;i<9;i++){
            for(int j=1;j<9;j++){
                if ((i!=3 or j!=6) && abs(surface[i][j] - last_surface[i][j])>0.01 ){
                    flag = true;
                }
            }
        }
        memcpy(last_surface,surface,10*sizeof(*surface));

    }

    // show array
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            printf("%6.2f ",surface[i][j]);
        }
        cout<<endl;
    }


}