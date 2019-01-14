#include<stdio.h>

int main()
{
	int i,j;
	int row,col;

	printf("\n Enter the Row :");
	scanf("%d",&row);

	//printf("\n Enter the Col :");
	//scanf("%d",&col);

	for(i=1;i<=row;i++)
		{
			for(j=1;j<=i;j++)
			{
				printf("*");
			}	
			printf("\n");
		}

return 0;

}
