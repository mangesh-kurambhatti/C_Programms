#include<stdio.h>

int main()
{
	int i,j,row;

	printf("\n Enter the rows :");
	scanf("%d",&row);

	for(i=1;i<=row;i++)
	{
		for(j=i;j<=row;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
