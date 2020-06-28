#include <iostream>
#include<cmath>
using namespace std;
int main()
{


	float a,b,c,fa,fb,fc,k=0.00001;
	cin>>a,b;
	
	fa=a-cos(a);
    fb=b-cos(b);
    
    if(fa*fb<0)
    {
	
	
    
	
	while ( abs(b-a)> 2*k  )
	
	
	c=(a+b/2);
	fc=c-cos(c);
	 if(fc*fa<0)
	 {
	 
	 
	 
	 b=c;
    
    }
	 else
	 
	 
	 
	 a=c;
	 fa=fc;

     
	cout<<a+b/2;
}
    
	else 
	
	

	
	cout<<" a message there might not be a root.  ";

   
	
}
    