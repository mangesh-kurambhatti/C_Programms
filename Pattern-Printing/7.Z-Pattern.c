/* Z-Pattern */


#include<stdio.h>

int main()
{
	int i,j,k,row;

	printf("\n Enter the row :");
	scanf("%d",&row);

	
	for(i=1;i<=row;i++)
	{
		printf("*");
	}
	
	printf("\n");

	for(i=1;i<=row;i++)
	{
		for(j=1;j<=row-i;j++)
			printf(" ");
		for(k=i;k<=i;k++)
			printf("*");
		printf("\n");
	}

	for(i=1;i<=row;i++)
	{
		printf("*");
	}	

return 0;
}
