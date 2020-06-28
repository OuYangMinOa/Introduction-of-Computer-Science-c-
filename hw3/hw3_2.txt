#include <iostream>
using namespace std;


int main(){
    int dec,out=0,exp=1;
    cout<<"input a decimal number [0,255]: ";
    cin>>dec;
    while (dec>0){
        out += dec%2*exp;
        exp *= 10;
        dec /= 2;
        
    }
    cout<<out;
    return 0;
}