#include <iostream>
using namespace std;

bool perfect_number(int num){
    int sum = 0;
    for (int i=1;i<num;i++){
        if (num%i==0){
            sum += i;
        }
    }
    return sum==num;
}

int main(void){
    int input;
    cout<<"plz input a number \n";
    for (int i = 2;i<10000;i++){
    if (perfect_number(i)){
        cout<<"The number "<<i<<" is a perfect number.\n";
    }
    }
}