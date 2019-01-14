
/* WAP to accept of  n integer array using malloc  and print it in reverse order */

#include<stdio.h> 
#include<stdlib.h>

int Reverse(int*,int);

int main()
{
	int n;
	int *array=NULL;

	printf("\n Enter the no of element you want in array[] :");
	scanf("%d",&n);

	array=(int *)malloc(n*sizeof(int));

	printf("\n Enter the array element :");
		for(int i=0;i<n;i++)
			{
				scanf("%d",&array[i]);
			}

	Reverse(array,n);
      
return 0; 
	
}

int Reverse(int array[],int n)
{
	printf("\n Array in reverse order :");
	
		for(int i=n-1;i>=0;i--)
			{
				printf("\n%d",array[i]);
			
			}	
}
