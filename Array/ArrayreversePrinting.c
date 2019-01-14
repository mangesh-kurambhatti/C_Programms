#include<stdio.h>
#include<stdlib.h>

int reverseArray(int *,int);

int main()
{
	int n;
	int *arr=NULL;

	printf("\n Enter the array size:");
	scanf("%d",&n);

	arr=(int *)malloc(n*sizeof(int));

	printf("\n Enter the Array Element:");
	for(int i=0;i<n;i++)
	{
		scanf("\n%d",&arr[i]);
	}

	reverseArray(arr,n);

free(arr);
return 0;
}

int reverseArray(int *arr,int n)
{
	printf("\n Reverse Elements are:");
	for(int i=n-1;i>=0;i--)
	{
		printf("\n%d",arr[i]);
	}
	printf("\n");
}
