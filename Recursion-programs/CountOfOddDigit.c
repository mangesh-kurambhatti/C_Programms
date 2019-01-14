#include<stdio.h>

int CountOfOddDigit(int);
int main()
{
	int no;
	
	printf("\n Enter the No -:");
	scanf("%d",&no);
	
	 printf("%d",CountOfOddDigit(no));
	
return 0;
}

int CountOfOddDigit(int no)
{
	int static count=0;
	int rem=0;
	if(no==0)
	{
		return 0;
	}
	else
	{
		rem=no%10;
		if(rem%2 != 0)
			{
		
				count++;
			}
				
		printf("\n Count of Odd no is :%d",count);
		CountOfOddDigit(no/10);	
	}
	
	

}

