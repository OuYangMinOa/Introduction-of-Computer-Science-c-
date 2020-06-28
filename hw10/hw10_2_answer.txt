#include <bits/stdc++.h>
using namespace std;


int main(void){
    int r,c,a;
    cin>>r>>c;

    int arr[c] = {0};
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a;
            arr[j] += a;
        }
    }

    for(int j=0;j<c;j++){
        cout<<arr[j]/r<<endl;
    }

}