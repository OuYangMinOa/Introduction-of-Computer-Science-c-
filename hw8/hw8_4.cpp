#include <bits/stdc++.h>
using namespace std;
int pow(int x, int n){
    int out = 1;
    for (int i = 0;i<n;++i){
        out *= x;
    }
    return out;
}

bool Armstrong(int num){
    int u = num, sum_ = 0, di;
    float p_f;
    int ni = log10(num)+1;
    
    while (u > 0){
        sum_ +=  pow(u%10,ni);
        u /= 10;
        
    }
    return sum_==num;
}

int main(){
    int n,m;
    cout<<"plz input n & m (n<m) : ";
    cin>>n>>m;
    for (int i=n;i<=m;i++){
        if (Armstrong(i)){
            cout<<i<<endl;
        }
    }
    return 0;
}