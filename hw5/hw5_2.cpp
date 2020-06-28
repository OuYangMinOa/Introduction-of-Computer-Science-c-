#include <iostream>
#include <cmath>
using namespace std;



int main(){
    float ax,ay, bx,by, cx,cy;
    cout<<"plz input three point"<<endl;
    cout<<"a :"<<endl;
    cin>>ax>>ay;

    cout<<"b: "<<endl;
    cin>>bx>>by;

    cout<<"c: "<<endl;
    cin>>cx>>cy;
    
    float abx = bx - ax, aby = by - ay;  // ab 向量的 xy
    float acx = cx - ax, acy = cy - ay;  // ac 向量的 xy
    float cross = abx*acy-aby*acx;       // 做外積
    if (cross<0){                        // 判斷正負
        cout<<ax<<","<<ay<<" "<<bx<<","<<by<<" "<<cx<<","<<cy<<endl;
        cout<<bx<<","<<by<<" "<<cx<<","<<cy<<" "<<ax<<","<<ay<<endl;
        cout<<cx<<","<<cy<<" "<<ax<<","<<ay<<" "<<bx<<","<<by<<endl;
    }else if (cross>0){
        cout<<ax<<","<<ay<<" "<<cx<<","<<cy<<" "<<bx<<","<<by<<endl;
        cout<<cx<<","<<cy<<" "<<bx<<","<<by<<" "<<ax<<","<<ay<<endl;
        cout<<bx<<","<<by<<" "<<ax<<","<<ay<<" "<<cx<<","<<cy<<endl;
    }else{                               // 如果是 0 就代表不是三角形
        cout<<"it not a triangle";
    }


    return 0;
}