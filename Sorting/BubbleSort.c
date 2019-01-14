#include<stdio.h>
void BubbleSort(int*,int);

int main()
{
	int arr[10];
 	int n;
	
	printf("\n Enter the no of Element in array :");
	scanf("%d",&n);

	printf("\n Enter the Array Element :");
	for(int i=0;i<n;i++)
	{
		scanf("%d",arr);
	}
	BubbleSort(arr,n);

	for(int k=0;k<n;k++)
	{
		printf("\n Sorted Array is:%d",arr[k]);
	}
return 0;
}

void BubbleSort(int arr[],int n)
{
	int i=arr[0];
	int j=arr[1];
	int temp;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}		
		}
	}
	
}
