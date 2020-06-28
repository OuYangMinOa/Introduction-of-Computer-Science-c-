#include<iostream>
using namespace std;

const int num=3;
void multi(int [][num], int [][num], int [][num]); // AB=C
int main()
{
	int a[num][num]={{1,2,1},{0,1,0},{3,5,-1}};
	int b[num][num]={{0}},c[num][num]={{0}};
	
	for(int i=0; i<num; i++)
		for(int j=0; j<num; j++)
			b[i][j]=a[i][j];
						
	multi(a,b,c); //c=AA		
	multi(a,c,b); //b=AAA	
	multi(a,b,c); //c=AAAA	
	multi(a,c,b);	
	
	for(int i=0;i<num;i++)
		{
			for (int j=0;j<num;j++)
				cout << b[i][j]<< "  ";
			cout << endl;
		}
	return 0;
}
void multi(int a[][num], int b[][num], int c[][num])
{
	for(int i=0;i<num;i++)
		for (int j=0;j<num;j++)
			c[i][j]=0;
			
	for(int i=0;i<num;i++)
		for (int j=0;j<num;j++)
			for (int k=0;k<num;k++)
				c[i][j]=c[i][j]+a[i][k]*b[k][j];		
}