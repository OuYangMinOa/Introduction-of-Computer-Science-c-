#include <bits/stdc++.h>
using namespace std;

int main(void){
    int r,c;
    cin>>r>>c;


    // 想法是用最小得值包圍題目給的矩陣
    //  7 8 3
    //  4 5 6
    //   |||
    // 3 3 3 3 3
    // 3 7 8 3 3
    // 3 4 5 6 3
    // 3 3 3 3 3
    int arr[r+2][c+2];
    int read[r][c];
    int min;

    // 讀取資料進 read 的同時 順便找最小的值是多少
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>read[i][j];
            if (read[i][j]<min){
                min = read[i][j];
            }
        }
    }

    // 再來把資料放進 arr，用最小的值包圍他
    for(int i=0;i<r+2;i++){
        for(int j=0;j<c+2;j++){
            if (0<i && i<r+1 && 0<j && j< c+1){
                arr[i][j] = read[i-1][j-1];
            }else{
                arr[i][j] = min;
            }
        }
    }

    //  你們可以列印出來看看 真的是包圍的
    // for(int i=0;i<r+2;i++){
    //     for(int j=0;j<c+2;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // 比較
    for(int i=1;i<r+1;i++){
        for(int j=1;j<c+1;j++){
            if (arr[i][j] > arr[i+1][j] &&
                arr[i][j] > arr[i-1][j] &&
                arr[i][j] > arr[i][j+1] &&
                arr[i][j] > arr[i][j-1]){
                    cout<<arr[i][j]<<endl;
                }
        }
    }

}