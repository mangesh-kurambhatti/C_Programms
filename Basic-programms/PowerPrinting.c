#include<stdio.h>
#include<math.h>
//IsPower(int);

int main()
{
	long double  i,no,result,result1=0;

	printf("\n Enter the limit upto which you want power :");
	scanf("%ld",&no);

	for(i=1;i<=no;i++)
	{
		result=pow(i,i);
		printf("%ld ^ %ld = %ld\n",i,i,result);
		result1=result+result1;		
			
	}
printf("Total Sum is :%ld \n",result1);
	
}
