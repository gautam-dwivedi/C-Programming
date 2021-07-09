// Display n numbers (using for loop)

#include<stdio.h>

void Display(int iNo)
{	
	int i;
	
	if(iNo<0)
	{iNo=-iNo;
	}
	for (i=1;i<=iNo;i++)
	{
		printf("%d\n",i);
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