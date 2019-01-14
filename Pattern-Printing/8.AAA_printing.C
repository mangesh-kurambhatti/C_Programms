/*

A
AA
AAA
AAAA

*/


#include<stdio.h>

int main()
{
	int i,j,k,row;
	char ch='A';

	printf("\n Enter the row :");
	scanf("%d",&row);


	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
			printf("%c",ch);
		printf("\n");

	}	

return 0;
}
