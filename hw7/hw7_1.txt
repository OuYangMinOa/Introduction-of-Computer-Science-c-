#include <iostream>
#include <cmath>
using  namespace std;


bool is_prime(int num){ // 判斷是不是質數的function
    int test_to = sqrt(num);
    for (int i=2;i<=test_to;i++){
        if (num%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    
    int N,M;
    cout<<"plz input [N,M] :";
    cin>>N>>M;
    
    int last_num = N; 
    int ll_num = N-1; // 用來避免 出現 3 5 5 7 這種狀況

    for (int num=N;num<=M;num++){
        if (is_prime(num)){
            if (num - last_num ==2){
                if (ll_num!=last_num){
                    cout<<last_num<<"  ";
                }
                cout<<num<<"  ";
                ll_num = num;
            }
            last_num = num;
        }
    }


    return 1;
}