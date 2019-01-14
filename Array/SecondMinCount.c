#include<stdio.h>
#include<stdlib.h>
int SecondMinCount(int*,int);

int main()
{
	int num,*arr=NULL;
	int i;
	printf("\n Enter the no you want in array :");
		scanf("%d",&num);

	arr=(int*)malloc(num*sizeof(int));

	printf("\n Enter the array Element :");
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);	
	}	

	printf("\n Minimum count is :%d",SecondMinCount(arr,num));

free(arr);	
return 0;
}

int SecondMinCount(int *arr,int num)
{
	int i=0;

	int min1=arr[0];
	int min2=arr[1];
	/*
	if(min1>min2)
	{
		min1=arr[1];
		min2=arr[0];
	}*/

	for(i=2 ;i<num;i++)
		{
			if(arr[i]<min1)
			{
				min2=min1;
			min1=arr[i];

			}
			else
			{
				if(arr[i]<min2)
				min2=arr[i];
			}
			
		}

	return min2;
}

