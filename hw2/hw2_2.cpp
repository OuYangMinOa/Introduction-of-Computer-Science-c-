#include <iostream>
using namespace std;


int main(){
    for (int N=10;N<=15;N++){
        int ans = 1;
        for (int i=1;i<=N;i++){
            ans *= i;
        }
        cout<<N<<"! = "<<ans<<endl;
    }
    return 0;
}