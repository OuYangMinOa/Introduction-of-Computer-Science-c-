#include <iostream>
using namespace std;

int main(void){
    int f_i1 = 0;
    int f_i2 = 1;
    int f_i3;
    cout<<0<<" "<<f_i1<<endl;
    cout<<0<<" "<<f_i2<<endl;
    for(int i=2;i<=20;i++){
        f_i3 = f_i1 + f_i2;
        f_i1 = f_i2;
        f_i2 = f_i3;
        cout<<i<<" "<<f_i3<<endl;
    }
}