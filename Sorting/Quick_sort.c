/******* Quick Sort by USING ravi-Bhau logic *******/

#include<stdio.h>
#include<stdlib.h>

int spliting(int*,int,int);
int QuickSort(int*,int,int);

int main()
{
	int n,i;
	int *arr=NULL;
	int LeftIndex=0,RightIndex;
		
	printf("\n Enter the no in array u want :");
	scanf("%d",&n);

	arr=(int*)malloc(n*sizeof(int));
	RightIndex=n-1;
	printf("\nEnter the nos in array :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);	
	}
	
	//LeftIndex=0;
	

	QuickSort(arr,LeftIndex,RightIndex);

	printf("\n Sorted Array is :");
	for(i=0;i<n;i++)
	{
		printf(" :%d",arr[i]);
	}	

free(arr);
return 0;
}

int spliting(int arr[],int LeftIndex,int RightIndex)
{
	int x=arr[RightIndex];
	int i=LeftIndex-1;
	int j,temp;
	for(j=LeftIndex;j<RightIndex;j++)
	{
		if(arr[j]<x)
			{
				i=i+1;
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}		
	}
	temp=arr[i+1];
	arr[i+1]=arr[RightIndex];
	arr[RightIndex]=temp;

//printf("\nreturning the pivot element at this Iteration is :%d ",arr[i+1]);
return i+1;
}

int QuickSort(int arr[],int LeftIndex,int RightIndex)
{
		if(LeftIndex<RightIndex)
			{
			int ReturnNumFromSplitFunction=spliting(arr,LeftIndex,RightIndex);
			QuickSort(arr,LeftIndex,ReturnNumFromSplitFunction-1);
			QuickSort(arr,ReturnNumFromSplitFunction+1,RightIndex);
			}
return 0;
}
