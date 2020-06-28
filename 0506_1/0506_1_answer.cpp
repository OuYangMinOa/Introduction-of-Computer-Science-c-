#include <iostream>
#include <cmath>
using  namespace std;


int main(){
    float ax = 10, ay = 0;
    float bx =  0, by = 0;
    float cx = 10, cy =10;

    float abx = bx - ax, aby = by - ay;
    float acx = cx - ax, acy = cy - ay;
    float abc = abs(abx*acy - aby*acx)/2;

    float px, py;
    cout<<"plz input point p(x,y) :";
    cin>>px>>py;
    
    float abp = abs((px-ax)*(py-by)-(px-bx)*(py-ay))/2;
    float acp = abs((px-ax)*(py-cy)-(px-cx)*(py-ay))/2;
    float bcp = abs((px-bx)*(py-cy)-(px-cx)*(py-by))/2;

    if      (abp == 0)          {cout<<2<<", The point is on the line ab";}
    else if (acp == 0)          {cout<<2<<", The point is on the line ac";}
    else if (bcp == 0)          {cout<<2<<", The point is on the line cb";}
    else if (abp+acp+bcp ==abc) {cout<<1<<", The point is inside the traingle abc";}
    else if (abp+acp+bcp > abc) {cout<<3<<", The point is outside the traingle abc";}
    else                        {cout<<"something goes wrong";}

    return 1;
}