#include <iostream>
using namespace std;

int N,x,y;
const int su = 1000;
int arr[su][su];


void next_point(){
    if (0<=x and x<N and 0<=y and y<N and arr[x][y]==0){
        return;}
    if (x<0){x=N-1;}
    if (y<0){y=N-1;}

    if (x>=N){x=0;}
    if (y>=N){y=0;}
    
    if (arr[x][y]!=0){
        x+=2;
        y--;
    }
    next_point();
}

int main(){
    cout<<"plz input N,k,x,y\n";
    int k;
    cin>>N>>k>>x>>y;
    
    int size = N*N;
    int end  = size+k;
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            arr[i][j] = 0;
            //printf("%2d ",arr[i][j]);
        }
        //cout<<endl;
    }
    while(k!=end){
        next_point();
        arr[x][y] = k;
        k++;
        x--;
        y++;
    }

    cout<<endl;
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            printf("%4d ",arr[i][j]);
        }
        cout<<endl;
    }
    cout<<endl;
}   