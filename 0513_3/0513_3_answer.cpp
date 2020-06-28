#include <iostream>
#include <cmath>
using namespace std;

float f(float x){
    return x-cos(x);
}

void root(float up,float down){
    float mid = (up+down)/2.0;
    if (abs(up-down)<0.0000001){cout<<mid;}
    else if (f(up)*f(mid)<0) {root(up,mid);}
    else {root(mid,down);}
}

int main(){
    float a = 0, b = acos(-1);
    if (f(a)*f(b)<0){
        root(a,b);
    }else{
        cout<<"there is no root";
    }
    return 0;
}