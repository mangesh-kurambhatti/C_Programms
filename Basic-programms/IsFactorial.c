#include<stdio.h>

int IsFactorial(int);

int main()
{
	int no;
	printf("\n Enter the no of which you want factorial :");
	scanf("%d",&no);
	
	if(no<0)
		{
			printf("Sorry..! Factorial is not possible");
		}	
	
	IsFactorial(no);

return 0;

}

int IsFactorial(int no)
{
	int i,result=1;
	
	if(no==0 || no == 1)
		{
				return 1;						
			//printf("\n Factorial of no is always 1 \n");
		}
	
	for(i=no;i>=1;i--)
	{
		result=result*i;
		
	}

for(i=no;i>0;i--)
{
	printf(" %d x",i);
}
	printf(" =%d \n",result);
	//printf("\n Factorial of required no %d is : %d \n ",no,result);
	
}
