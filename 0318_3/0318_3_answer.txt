#include <iostream>
using namespace std;


int main(){
    int num,out = 0,exp=1;
    cout<<"plz input a binary number: "<<endl;
    cin>>num;

    while(num>0){
        out += exp*(num%10);
        num /= 10;
        exp *= 2;
    }
    cout<<out;
    return 0;
}