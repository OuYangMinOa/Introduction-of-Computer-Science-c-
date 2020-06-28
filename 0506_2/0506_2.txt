#include <iostream>
#include <cmath>
using  namespace std;


int main(){
    int old_prime = 2;
    int maxdist = 0;
    int up,down;
    int test_to;
    bool flag;

    for (int num=3;num<=10000;num++){
        test_to = sqrt(num); // 要判斷是不是質數 判斷到根號就好了
        flag = true;         // 假設他是質數
        for (int i=2;i<=test_to;i++){
            if (num%i==0){
                flag = false; // 發現他不是質數
                break;        // 離開迴圈
            }
        }
        if (flag){            // 如果他是質數
            if (maxdist < num-old_prime){  //上一個差距 比較小
                maxdist = num-old_prime;   // 用這次的差距取代
                up   = num;
                down = old_prime;
                }
            old_prime = num;
        }
    }

    cout<< up<<" - "<< down<<" = "<< maxdist;


    return 1;
}