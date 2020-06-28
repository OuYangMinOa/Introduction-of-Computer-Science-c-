#include <bits/stdc++.h>
using namespace std;

int is_prime(int n){
    for (int i=2;i<=sqrt(n);i++){
        if (n%i==0){return 0;}
    }
    return 1;
}

int is_add(int n){
    int sum = 0;
    while (n!=0){
        sum += n%10;
        n /= 10;
    }
    return is_prime(sum);
}

void func(int n, int& x, int& y){
    x = is_prime(n);
    y = is_add(n);
}

int main(void){
    cout<<"plz input a number : ";
    int num;
    cin>>num;
    int x=0,y=0;
    func(num, x, y);
    cout<<"x = "<<x<<"\n";
    cout<<"y = "<<y<<"\n";

}