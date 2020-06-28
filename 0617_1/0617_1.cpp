#include <bits/stdc++.h>
using namespace std;
int quick_sort(double *A,int l,int r);
int partition(double *A,int l,int r);

int quick_sort(double *A,int l,int r){  // 快速排序法
    int index;
    if (r>l){
        index = partition(A,l,r);  
        quick_sort(A,l,index);
        quick_sort(A,index+1,r);
    }
}

int partition(double *A,int l,int r){
    int pivot = A[l];
    swap(A[l],A[r]);
    for (int i=l;i<r;i++){
        if (A[i]<pivot){
            swap(A[i],A[l++]);
        }
    }
    swap(A[r],A[l]);
    return l;
}


int main(void){
    string file = "tmp.txt"; // 文字

    fstream f;  // 讀檔 i/o
    f.open(file); // 讀檔

    double num[1000];  
    int n=0;

    while (!f.eof()){
        
        f>>num[n];  // 存進 num 矩陣
        n++;
    }

    quick_sort(num,0,n-1);  // 我寫的快速排序法
                            // 你們也可以用老師教的 bubble sort 或 selection sort

    if (n%2==0){ // 中位數
        cout<<0.5*(num[n/2-1]+num[n/2])<<endl;
    }else{
        cout<<num[n/2]<<endl;
    }

}