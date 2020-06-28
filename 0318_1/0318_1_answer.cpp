#include <iostream>
using namespace std;


int main(){
    for (int i=1;i<=5;i++){
        int ans = 1;
        for (int j = 1;j<=i;j++){
            ans *= j;
        }
        cout<<i<<"! = "<<ans<<endl;
    }
    return 0;
}