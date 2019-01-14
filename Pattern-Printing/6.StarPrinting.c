/*

********
 ******
  ***
   *

*/


#include<stdio.h>

int main()
{
	int i,j,k,row;

	printf("\n Enter the row :");
	scanf("%d",&row);


	for(i=row;i>=1;i--)
	{
		for(j=1;j<=row-i;j++)
			printf(" ");
		for(k=2*i-1;k>=1;k--)
			printf("*");
		printf("\n");

	}	

return 0;
}
