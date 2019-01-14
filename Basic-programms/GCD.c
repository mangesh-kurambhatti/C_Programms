#include<stdio.h>

int main()
{
	int no1,no2;

	printf("\n Enter the 1st no :");
	scanf("%d",&no1);

	printf("\n Enter the 2nd no :");
	scanf("%d",&no2);

	while(no1 != no2)
	{
		if(no1>no2)
		{
			no1=no1-no2;
		}
		else
		{
			no2=no2-no1;
		}
	}
printf("GCD is %d:",no1);
}
