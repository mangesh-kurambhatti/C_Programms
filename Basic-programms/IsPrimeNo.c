#include<stdio.h>
int IsPrime(int);

int main()
{
	int i,no,flag=0;
	printf("\n Enter the no to check for prime or not :");
	scanf("%d",&no);

	if(no>2)
	{
		for(i=3;i<(no/2);i+=2)
		{
			if(no%i==0)
			{
				flag=1;
				break;
			}
		}

	}
		
		if(flag==1)
		{
			printf("\n NOT prime no %d :",no);
		}
		else
		{
	
			printf("\n Prime no %d :",no);
		}
}
