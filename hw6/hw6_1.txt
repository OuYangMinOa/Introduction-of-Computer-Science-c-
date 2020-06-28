#include <iostream>
using namespace std;

int main(){
    for (int num = 2;num<=1000;num++){
        int sum_div = 0;
        for (int div = 1;div<num;div++){
            if (num%div==0){     // 如果整除代表是他的因數
                sum_div += div;
            }
        }

        if (sum_div==num){        // 如果因數總和=自己 代表他是完美數字
            cout<<num<<" ";       // 列印出來
            for (int div = 1;div<num;div++){  // 再把他的因數各個列印出來
                if (num%div==0){  
                    cout<<div<<" ";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}