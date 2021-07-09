//Accept two numers from user and return the maximum and minimum number


#include "header2.h"    
//include user defined file 
//we are calling pre processor get the header file - header2.h means all data will be copied

int main()
{
	int iNo1=0;
	int iNo2=0;
	int iRet=0;
	int iRet2=0;
	
	printf("Enter first number\n");
	scanf("%d",&iNo1);
	printf("Enter second number\n");
	scanf("%d",&iNo2);
	
	iRet= Maximum(iNo1,iNo2);  ///function getting called
	printf("Maximum number is:%d\n",iRet);
	
	iRet2= Minimum(iNo1,iNo2);
	printf("Miniimum number is:%d",iRet2);
	
	return 0;
}








