#include <bits/stdc++.h>
using namespace std;

void selection_sort(int* A,int n){
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if (A[min] > A[j]){
                min = j;
            }
        }
        swap(A[min],A[i]);
    }

}


int main(){
    int n = 10;
    int A[n]= {10,8,7,4,3,1,6,9,5,2};

    for(int i=0;i<n;i++)
        cout<<A[i]<<" ";
    
    cout<<endl;
    selection_sort(A,10);

    for(int i=0;i<n;i++)
        cout<<A[i]<<" ";
    

}