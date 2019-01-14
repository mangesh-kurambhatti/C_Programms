#include<stdio.h>

int IsPrime(int);

int main()
{

	int no;
	
	printf("\n Enter the lower bound  :");
	scanf("%d",&no);

	printf("\n");

	IsPrime(no);

return 0;

}

int IsPrime(int no)
{
	int i,flag=0;

	for(i=2;i<no/2;i+=2)
		{
			if(no%i==0)
				{
					flag=1;
					break;

				}
		}
	
if(flag==1)
	{
		printf("\n No is not prime ");
	}
else
	{
		printf("\n No is prime");
	}
return 0;
}
