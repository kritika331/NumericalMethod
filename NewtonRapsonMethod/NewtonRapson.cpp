#include<iostream>
#include<iomanip>
#include<conio.h>
#include<cstdlib>
#include<cmath>
#define f(x) log(x) + 6*x - 5
#define g(x) (1/x)+6

using namespace std;


int main()
{
	float x0,x1,error=1.0;
	float err,f1,f2,h;
	int count=1;
	
	cout<<"Enter the value of x = ";
	cin>>x0;
	cout<<"Enter minimium error = ";
	cin>>err;
	cout<<"itr"<<"\t"<<"X"<<"\t"<<"f1"<<"\t"<<"f2"<<"\t"<<"X(n+1)"<<"\t"<<"Error"<<endl;
	while(error>err)
	{
		
		f1 = f(x0);
		f2 = g(x0);
		x1 = x0 - (f1/f2);
		error = (x1 - x0)/x1;
		error = fabs(error);
		cout<<count<<"\t"<<x0<<"\t"<<f1<<"\t"<<f2<<"\t"<<x1<<"\t"<<error<<endl;
		h=x0;
		x0=x1;
		count++;
	}
	cout<<"Root is "<<h;
	
	
}

