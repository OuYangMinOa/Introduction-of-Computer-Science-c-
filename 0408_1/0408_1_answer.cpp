#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cout<<"plz input three number";
    cin >>a >>b >>c;
    if (b>a){swap(a,b);} // swap 可以交換兩個變數的值
    if (c>b){swap(c,b);}
    if (b>a){swap(a,b);}

    cout<<a<<b<<c;
    return 0;
}


// 以下是不用 swap 的版本
// 全選 ctrl + / 可以快速去//
// int main(){

//     int a, b, c, t;
//     cout<<"plz input three number";
//     cin >>a >>b >>c;
//     if (b>a){t=a;a=b;b=t;}
//     if (c>b){t=c;c=b;b=t;}
//     if (b>a){t=a;a=b;b=t;}

//     cout<<a<<b<<c;
//     return 0;
// }

///