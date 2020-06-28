#include <iostream>
#include <fstream> 
using namespace std ;
int main( )
{
 ifstream input;
 input.open("a55.txt");
 double sum=0, number;
 int x=0,i=0,j,q,w,h,temp;
 int n[100], k[5][5], a[5][5], b[5][5];
 for(i=0;i<5;i++)
    for(j=0;j<5;j++)
        a[i][j]=0;
 while (!input.eof())
 {
 input >> number;
 if(input.eof()) break;
 cout<< number << " "; 
 n[x]=number;
 x++;
}
cout<<"\n";
j=0;
for(q=0;q<5;q++){
	for(w=0;w<5;w++){
		k[q][w]=n[j];
		j++;
	}
}

for(q=0;q<5;q++){
	for(w=0;w<5;w++){
		cout<<k[q][w];
	}
	cout<<"\n";
}
 for(i=0;i<5;i++)
    for(j=0;j<5;j++)
        b[i][j]=k[i][j];
for (i= 0; i< 5; i++)
	for (j = 0; j < 5; j++)
		for (h = 0; h < 5; h++)
				{
			a[i][j] += k[i][h] * b[h][j];
				}
for (i= 0; i< 5; i++)
	    for (j = 0; j < 5; j++)
 	        b[i][j] =0;
 	for (i= 0; i< 5; i++)
		for (j = 0; j < 5; j++)
			for (h = 0; h < 5; h++)
				 b[i][j] += a[i][h] * k[h][j];
				 
	for (i= 0; i< 5; i++)
	    for (j = 0; j < 5; j++)
 	        a[i][j] =0;
 	for (i= 0; i< 5; i++)
		for (j = 0; j < 5; j++)
			for (h = 0; h < 5; h++)
				a[i][j] += b[i][h] * k[h][j];
	for (i= 0; i<5; i++)
		{
		for (j = 0; j < 5; j++)
			{
			cout<< a[i][j] <<" ";
		    }
			cout<<"\n";
		}
 ofstream outfile;
 outfile.open("b.txt");
for (i= 0; i<5; i++)
		{
		for (j = 0; j < 5; j++)
			{
			outfile << a[i][j]<<" ";
		    }
	        outfile <<"\n";
		}
 return 0;
} 