#include <iostream>
using namespace std;

int main(){
    float c=1,N,M;
    cout<<"input N M"<<endl;
    cin>>N>>M;
    for (int i=1;i<=M;i++){
        c *= (N-M+i)/i;
    }
    cout<<c;

    return 0;
}