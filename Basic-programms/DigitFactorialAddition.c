#include<stdio.h>

int DigitFactorialAddition(int no);

int main()
{
	int no;

	printf("\n Enter the Number :");
	scanf("%d",&no);
	
	DigitFactorialAddition(no);


return 0;
}

int DigitFactorialAddition(int no)
{
	int i,rem,FactAddition=0,result1;

	while(no)
	{
		
		rem=no%10;
				int result=1;
			for(i=rem;i>=1;i--)
			{
						
						result=result*i;
			}				
		
		//int result1=result;
		FactAddition=result+FactAddition;
			
		no=no/10;
	}
	printf("\n  DIGIT FACTORAIL ADDITION is :%d\n",FactAddition);
}

