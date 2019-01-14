#include<stdio.h>
#include<stdlib.h>
int maxFromArray(int *,int);

int main()
{
	int n;
	int *arr=NULL;

	printf("\n Enter the array Element:");
	scanf("\n%d",&n);

	arr=(int*)malloc(n*sizeof(int));

	printf("\n Enter the array Element:");
	for(int i=0;i<n;i++)
	{
		scanf("\n %d",&arr[i]);	
	}

	maxFromArray(arr,n);

free(arr);
return 0;
}

int maxFromArray(int *arr,int n)
{
	int count=0;
	int maxcount=0;
	for(int i=0;i<n;i++)
	{
		count=1;
		for(int j=i+1;j<n;j++)
		{
			
			if(arr[i]==arr[j])
			{
				count++;
			}
			if(count>maxcount)
			{
				maxcount=count;
			}
		}

	}
	printf("\n\n\n%d",maxcount);
}
