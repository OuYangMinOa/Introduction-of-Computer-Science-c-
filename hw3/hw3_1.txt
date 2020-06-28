#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int num;
    cout<<"plz input a 5-digit number"<<endl;
    cin>>num;
    for (int i=4;i>=0;i--){
        cout<<int(num/pow(10,i))%10<<" ";
    }
    cout<<endl;
    for (int i=3;i>=0;i--){
        cout<<int(num/pow(10,i))%10<<endl;
    }
    return 0;
}