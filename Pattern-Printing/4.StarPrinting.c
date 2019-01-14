/*

****
 ***
  **
   *

*/


#include<stdio.h>

int main()
{
	int i,j,k,row;

	printf("\n Enter the row :");
	scanf("%d",&row);


	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
			printf(" ");
		for(k=1;k<=row-i+1;k++)
			printf("*");
		printf("\n");

	}	

return 0;
}
