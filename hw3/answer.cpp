#include <iostream>

using namespace std;

int pow(int i,int n){
    if (n==0){
        return 1;
    }else{
        return i*pow(i,n-1);
    }
}

void first(){
    int a;
    int b[5];  
    cout<<"input 5 number: ";
    cin >> a;
    for (int i=0;i<5;i++){
        b[i] = (a/pow(10,4-i))%10;
        cout<<b[i]<<" ";
    }
    cout<<endl;
    for (int i=1;i<5;i++){
        cout<<b[i]<<endl;
    }

}

void second(){
    int dec,out=0;
    cout<<"input a decimal number [0,255]: ";
    cin>>dec;
    while (dec>0){
        out *= 10;
        out += dec%2;
        dec /= 2;
        
    }
    cout<<out;
}

void second_no_limit(){
    int dec,exp=0;

    char out[32];
    for (int i=0;i<32;i++){
        out[i] = '0';
    } 
    cout<<"input a decimal number [0,255]: ";
    cin>>dec;
    while (dec>0){
        if (dec%2 ==1){
            out[exp] = '1';
        }else{
            out[exp] = '0';
        }
        dec /= 2;
        exp += 1;
    }
    for (int i=0;i<= exp;i++){
        cout<<out[exp-i]<<" ";
    } 
}

int main(){
    first();
    second_no_limit();
}   