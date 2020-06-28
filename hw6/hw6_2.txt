#include <iostream>
using namespace std;

int main(){
    int N,M,count = 0;
    cout<<"plz input N(10~99) & M(1000000~9999999)"<<endl;
    cin>>N>>M;

    while(M>0){
        if (N==M%100){ // 想法是一直看個位跟十位數 
            count++;   // 所以是取100的餘數
        }              // 如果 N 跟 M 右邊兩位一樣，count就加一
        M /= 10;       // 向右移一格(M 除以10)
    }
    cout<<count;

    return 0;
}