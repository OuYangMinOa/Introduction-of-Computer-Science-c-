#include <iostream>

using namespace std;

int f(int n){
    return n*n*n*n + 2*n*n + 2;
}

int sum_to(int n){
    int out = 0;
    for (int i =1; i<=n;i++){
        out += f(i);
    }
    return out;
}

int main(){
    cout<<sum_to(5);
    return 0;
}