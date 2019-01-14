
/* WAP to accept an array of n  integer using malloc  from user and display max and min from them */ 

#include<stdio.h>
#include<stdlib.h>
int Max(int*,int);
int Min(int*,int);

int main()

{
	int n;
	int *array=NULL;

	printf("\n Enter the no of Element you want in array[] :");
	scanf("%d",&n);

	array=(int *)malloc(n*sizeof(int));

	printf("\n Enter the array Element :");
	for(int i=0;i<n;i++)
		{
			scanf("%d",&array[i]);
		}
	printf("\n Maximum Element in array is :%d",Max(array,n));
	printf("\n Minimum Element in array is :%d",Min(array,n));

return 0;
}

int Max(int array[],int n)
{
	int max=0;

	for(int i=0;i<n;i++)
		{
			if(array[i]>max)
				{
					max=array[i];
				}
			}
		return max;
}

int Min(int array[],int n)
{
	int min=0;

	for(int i=0;i<n;i++)
		{
			if(array[i]<array[i+1])
				{
					
					min=array[i];	
				}			
		}
		return min;
} 
