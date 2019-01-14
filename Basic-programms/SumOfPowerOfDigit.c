#include<stdio.h>
#include<math.h>

int SumOfPowerOfDigit(int,int);

int main()
{
	int no1,no2;

	printf("\n Enter the 1st Number :");
	scanf("%d",&no1);

	printf("\n Enter the 2nd Number :");
	scanf("%d",&no2);

	SumOfPowerOfDigit(no1,no2);

return 0;
}

int SumOfPowerOfDigit(int no1,int no2)
{
	int i,result=0,rem1,rem2,result1=0;

	while(no1)
	{
		rem1=no1%10;
		int no=no2;
		while(no)
		{
			rem2=no%10;

			result=pow(rem1,rem2);
			
			result1=result1+result;
			
			no=no/10;		
		}						
	no1=no1/10;
	
	}
	printf("result is :%d \n",result1);
	
//	printf("\n result is :%d ",result);
}

