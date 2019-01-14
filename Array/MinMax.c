#include<stdio.h>
#include<stdlib.h>
int MinMax(int *,int);
int main()
{
	int i,*arr=NULL,num;

	printf("\n Enter the Array Size	");
	scanf("%d",&num);

	arr=(int *)malloc(num*sizeof(int));

	printf("\n Enter the array Element :");
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}	
	
	MinMax(arr,num);

free(arr);
return 0;
}

int MinMax(int arr[],int num)
{
	int max=arr[0];
	int min=arr[0];
	int i;
	for(i=0;i<num;i++)
	{
		if(arr[i]>max)
			max=arr[i];
		if(arr[i]<min)
			min=arr[i];		
	}

	printf("\n Min =%d and Max=%d",min,max);
}
