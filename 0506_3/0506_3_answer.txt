#include <iostream>
#include <cmath>
using  namespace std;

// 我使用你們新教的 function 來寫這次作業

double r;  // 設 r 為全域變數 : 代表function裡面也可以用 
double f(double x);
void two(double up, double down);

int main(){
    double pi = acos(-1);
    int n;
    cout<<"plz input r :";
    cin>>r;
    n = r/pi+1;
    
    for (int i=1; i<=n;i++){
        two((i-1)*pi, i*pi);
    }

    return 1;
}

void two(double up, double down){ // 遞迴版本的2分逼法  要不是遞迴的 去看之前的上課練習
    double mid = (up+down)/2 ;
    if (down > r){two(up , r);return;} // 如果 down > r sqrt(r*r-x*x) 會出現複數
    if (abs(up-down)<0.001){           // 代表超過了此函數在實數上的定域義
        cout<<mid<<"  ";
        return;
    }
    if (f(up)*f(mid)<0){two(up , mid);} 
    else               {two(mid,down);}
}

double f(double x){
    return tan(x) - sqrt(r*r-x*x);
}