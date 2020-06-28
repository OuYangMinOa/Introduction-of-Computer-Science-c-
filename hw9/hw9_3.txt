#include <iostream>
using namespace std;

int fibonacci(int a,int b,int n){
    if      (n==0) {return a;}
    else if (n==1) {return b;}
    else           {return a*fibonacci(a,b,n-1)+b*fibonacci(a,b,n-2);}
}

int main(void){
    for(int i=0;i<=10;i++){
        cout<<fibonacci(1,1,i)<<" ";
    }
}