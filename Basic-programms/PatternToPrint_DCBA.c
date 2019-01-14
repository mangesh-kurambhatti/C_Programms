/*
	To print the program in format 
	
			A
		  B A	
		C B A
	  D	C B A
*/
#include<stdio.h>

int main()
{
	int i,j,row;

	printf("\n Enter the no of row :");
	scanf("%d",&row);
	
	
	for(i=1;i<=row;i++)
		{
			
			char ch='A'+i-1;

			for(j=1;j<=row-i;j++)
				printf(" ");
		
			for(j=0;j<i;j++,ch--)
				printf("%c",ch);
			
			printf("\n");						

		}
}
