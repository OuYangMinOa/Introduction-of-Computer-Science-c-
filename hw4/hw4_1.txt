#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float a,b,c;
    cout<<"plz input the three sides of the triangle :"<<endl;
    cin>>a>>b>>c;
    if (a+b>c && a+c>b && b+c>a){
        cout<<1;
    }else{
        cout<<0;
    }
    return 0;
}