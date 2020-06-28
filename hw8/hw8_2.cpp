#include <iostream>
using namespace std;

int C(int n,int m){
    if (n==m || m==0){return 1;}
    else{return C(n-1,m) + C(n-1,m-1);}
}

int F(int n,int m){
    int out = 0;
    for (int k =0;k<=m;k++){
        out += C(n,k);
    }
    return out;
}

int main(void){
    int n,m;
    cout<<"plz input n & m (n>m) : ";
    cin>>n>>m;
    cout<<F(n,m);

}