#include<stdio.h>
#include<conio.h>
#include<math.h>

#define f(x) 2*x*x*x-5

void main()
{
	 float x0, x1, x2, f0, f1, f2 , e=0.001;
	 int i=1;
	 printf("\nEnter two numbers:\n");
	 scanf("%f%f", &x0, &x1);

	 f0=f(x0);
	 f1=f(x1);
	 printf("\ni\t\tx0\t\tx1\t\tx2\t\tf(x2)\n");
	 
	 do
	 {
		x2=(x0+x1)/2;
		f2=f(x2);
		printf("%d\t\t%f\t%f\t%f\t%f\n",i, x0, x1, x2, f2);
		
		if( f0*f2<0)
		{
		   x1=x2;
		   f1=f2;
		}
		else
		  {
			x0=x2;
			f0=f2;
		  }
		  i=i+1;
	}while(fabs(f2)>e);
	printf("\nRoot is: %f", x2);
	getch();
}

