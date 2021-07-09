
// Addition of two integers

#include<stdio.h>
	
int a=5.6;
int b=6.6;

int add( int c,int d)
{
	int sum =0;
	sum=c+d+a+b;
	return sum;
}

int main()
{	
	int d;
	d=add(a,b);
	
	printf("Addition is %d\n",d);
	return 0; 
}
