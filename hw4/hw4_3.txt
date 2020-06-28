#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num1, num2, A=0, B=0;
    cout<<"Plz enter two 4-digit numbers without duplicate numbers\n";
    cin>>num1>>num2;
    // 判斷 A
    for (int i=0;i<4;i++){ // i = 0..3
        int n1 = int(num1/pow(10,i))%10;
        int n2 = int(num2/pow(10,i))%10;
        if (n1 == n2){
            A++;
        }
    }
    // 判斷 B
    for (int i=0;i<4;i++){ // i = 0..3
        for (int j=0;j<4;j++){
            int n1 = int(num1/pow(10,i))%10;
            int n2 = int(num2/pow(10,j))%10;
            if (i!=j && n1==n2){
                B++;
            }
        }
    }
    cout<<A<<" A "<<B<<" B "<<endl;
    return 0;
}