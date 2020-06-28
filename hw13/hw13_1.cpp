#include <bits/stdc++.h>
using namespace std;

// 檢查 j  跟 j_1 是否可以交換(前k跟分數都一樣)
bool check(int (*A)[7],int k, int j, int j_1){ 
    for (int i=0;i<k-1;i++){  
        if (A[j][i]!=A[j_1][i]){ // 如果 j_1 != j 代表不能交換
            return false;  
        }
    }
    return true;
}

void sort_by_each(int (*A)[7],int n,int k){ // 依指定科目排序
    for (int i=0;i<n;i++)
        for (int j=0;j<n-1-i;j++)
            if (A[j][k]<A[j+1][k] && check(A,k,j,j+1))
                swap(A[j],A[j+1]);
}

bool all_same(int (*A)[7],int j, int j_1){ // 是否所有科目都相同
    for (int i=0;i<6;i++){
        if (A[j][i]!=A[j_1][i]){
            return false;
        }
    }

    return true;
}

int main(void){
    string file = "score.txt";
    string file_2 = "admission.txt";

    fstream f;
    ofstream g;

    f.open(file);
    g.open(file_2);

    int m,n;
    f>>m>>n;

    int label[n][7];
    //  依照權重大小讀入 -> total Math English Science Chinese Social id
    for (int i=0;i<n;i++){
        //     id    chinese   English   Math      Science   Social
        f>>label[i][6]>>label[i][4]>>label[i][1]>>label[i][3]>>label[i][2]>>label[i][5];
    }


    for (int i=0;i<n;i++){ // 算出total
        int total =0;
        for (int j=1;j<6;j++){
            total += label[i][j];
        }
        label[i][0] = total;
    }

    // label 0 ~ 6
    // 0     1    2       3       4       5      6      
    // total Math English Science Chinese Social id

    cout<<"total Math English Science Chinese Social id\n";
    for (int i=0;i<n;i++){
        for (int j=0;j<7;j++){
            cout<<label[i][j]<<"  ";
        }
        cout<<endl;
    }

    for(int k=0;k<6;k++)  // 依照權種大小排序 從 total 排到 Social
        sort_by_each(label,n,k);

    cout<<endl;
    for (int i=0;i<n;i++){
        for (int j=0;j<7;j++){
            cout<<label[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;
    

    
    
    int now=0;
    while (m>0 or all_same(label,now,now-1)){
        cout<<label[now][6]<<" ";
        g<<label[now][6]<<" ";
        now++;
        m--;
    }
    g.close();

    

}