#include<stdio.h>

int Table(int,int);
int main()
{
	int num1,num2;		
	printf("\n Enter the lower bound : ");
	scanf("%d",&num1);
	
	printf("\n Enter the upper bound : ");
	scanf("%d",&num2);

	Table(num1,num2);
	
return 0;

}


int Table(int num1,int num2)
{
	int i=num1,j=num2,result;

	for(i=num1;i<=num2;i++)
	{
		printf("Table is %d \n",i);
		for(j=1;j<=10;j++)
		{
			result=i*j;
			printf("\n %d * %d = %d \t\t\t",i,j,result);
		}
		printf("\n\n\n");
	}


	

	return 0;
}
