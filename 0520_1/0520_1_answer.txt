#include <bits/stdc++.h>
using namespace std;

double func(float x){
    return sin(exp(x));
}

double integrate(double up, double down, int n){
    double delta_x = (up - down) / n;
    double a,b;

    double ans = func(up) + func(down);
    for (int i=1;i<n-1;i+=2){
        a = down + delta_x*(i);
        b = down + delta_x*(i+1);
        ans += 2*func(a)+4*func(b);
    }
    ans = delta_x/3*ans;
    return ans;
}

int main(void){
    double up = 5, down = -2;
    double exact_ans = 1.440521215590765;
    double ans, error;

    printf("\n|   n   |  simpon    |  exact     |  error(%%)  |\n");
    for (int i=1000;i<=10000;i+=1000){
        ans = integrate(up,down,i);
        error = abs(exact_ans - ans)/exact_ans*100;
        printf("| %5d | %-3.8f | %-3.8f | %-3.8f |\n",i,ans,exact_ans,error);
    }
    // n 切幾個格子點
    // ans 算出來的答案
    // exact 實際答案
    // error(%) 與實際答案的誤差

}