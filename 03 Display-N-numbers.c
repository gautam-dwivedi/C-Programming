// Display n numbers (using While loop)

#include<stdio.h>

void Display(int iNo)
{	
	
	int n=1;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(n<=iNo)
	{
		printf("%d\n",n);
		n=n+1;
	}
}

int main()
{
	int iValue=0;
	int	iRet =0;
	printf("Enter first number\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	return 0;
}