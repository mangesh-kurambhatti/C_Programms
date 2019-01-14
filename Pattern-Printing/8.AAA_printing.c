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
	char ch;

	printf("\n Enter the row :");
	scanf("%d",&row);

	printf("\n Enter the character you Want :");
	scanf("%c",&ch);

	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
			printf("%c",ch);
		printf("\n");

	}	

return 0;
}
