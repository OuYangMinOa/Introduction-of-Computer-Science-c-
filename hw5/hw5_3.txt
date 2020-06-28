#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"plz input a binary number: ";
    cin>> num;

    if (num<0){  // 如果是負的
        cout<<"It is nagetive";
    }else{
        int exp = 1,ans = 0,digits,flag = 1;
        while(num>0){ 
            digits = num%10;  // 個位數取出來
            if (digits!=0 && digits!=1){ // 看是否 不為0 和 不為1
                flag = 0; // flag = 0 代表不是2進位數字
                break;    // 跳出迴圈
            }
            ans += digits*exp;  // 累加 個位數*2^n
            exp *= 2;           // 多乘一個2
            num /= 10;          // 右移
        }

        if (flag){
            cout<<ans;
        }else{
            cout<<"It is not a binary number";
        }
        
    }

    


    return 0;
}