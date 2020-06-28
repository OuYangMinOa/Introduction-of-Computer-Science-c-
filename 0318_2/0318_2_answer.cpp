#include <iostream>
#include <cmath>
using namespace std;


int main(){
    cout << "plz input a 4-digit number"<<endl;
    int num;
    cin>>num;

    for (int i = 0;i<4;i++){
        cout<< int(num/pow(10,3-i))%10<<"  ";
    }
    return 0;
}