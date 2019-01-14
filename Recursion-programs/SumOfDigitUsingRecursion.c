#include<stdio.h>

int SumOfDigit(int);

int main()
{
	int no;

	printf("\n Enter the no -:");
	scanf("%d",&no);

	printf("%d",SumOfDigit(no));
return 0;

}

int SumOfDigit(int no)
{
	int sum=0,rem=0;
	if(no==0)
		return 0;
	
	else
		rem=no%10;
		return(rem+SumOfDigit(no/10));
		//return sum;
}
