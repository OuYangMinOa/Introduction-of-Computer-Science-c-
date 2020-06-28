#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double up = 0;
    double down = acos(-1); // pi
    double tolerance = 0.00001;
    double mid;
    double f_up,f_mid,f_down;

    while (abs(up-down)>tolerance){
        mid = (up+down)/2;

        f_up = up-cos(up);
        f_mid = mid-cos(mid);
        f_down = down-cos(down);

        if (f_mid*f_up<0){
            down = mid;
        }else if(f_mid*f_down<0){
            up = mid;
        }
    }
    cout<<mid;
    return 0;
}