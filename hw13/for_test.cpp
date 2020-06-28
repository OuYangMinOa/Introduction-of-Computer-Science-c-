#include <iostream>
#include <stdlib.h> 
#include <ctime>
#include <cmath>  
using namespace std;
int main( )
{
	srand(time(NULL));
	float a,b,c,d=0,e=0,D=0;
	for(c=0;c<=50000;c++)
	{
	a=0;
	for(b=0;b<=100;b++){
	if (rand()%2==1)
	{
		a--;
	}
	if (rand()%2==0)
	{
		a++;
	} 
	                 }  
	 d=(d+a);}
	for(c=0;c<=50000;c++)
	{
	a=0;
	for(b=0;b<=100;b++){
	if (rand()%2==1)
	{
		a--;
	}
	if (rand()%2==0)
	{
		a++;
	} 
	                 }  
	 e=(e+a);}
    D=(d*d)+(e*e);
    cout<<"x="<<d<<" "<<"\n";
    cout<<"D="<<D<<" ";
    
	return 0;
}