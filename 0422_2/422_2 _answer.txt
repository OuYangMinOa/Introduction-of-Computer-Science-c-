#include <iostream>
#include <cmath>
using namespace std;

int main(){
    for(int num=2;num<=1000;num++){
        int is_prime = 1;    // 先假設他是質數
        for (int div=2;div<num;div++){
            if (num%div==0){ // 發現有數字可以整除他
                is_prime=0;  // 所以他不是質數
            }
        }
        if (is_prime==1){
            cout<<" "<<num;
        }
    }
    return 0;
}