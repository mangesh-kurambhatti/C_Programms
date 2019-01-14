/*    *
   	 **
	***
  *****
*/


#include<stdio.h>

int main()
{
	int i,j,k,row;

	printf("\n Enter the row :");
	scanf("%d",&row);

	for(i=1;i<=row;i++)
	{
		for(k=1;k<=row-i;k++)
			printf(" ");
		for(j=1;j<=i;j++)
			printf("*");

		printf("\n");
	}

return 0;
}
