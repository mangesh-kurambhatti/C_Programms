/* 
To perform union of two array */

#include<stdio.h>
#include<stdlib.h>

//int Sort(int*,int);
int UnionOfArray(int*,int*,int,int);
int IntersectionOfArray(int*,int*,int,int);
int SymmetricDifference(int *arr1,int *arr2,int n,int m);

int main()
{
	int n,m,*arr1=NULL,*arr2=NULL;

	printf("How many element want in 1st array :");
	scanf("%d",&n);

	printf("How many element want in 2nd array :");
	scanf("%d",&m);

	arr1=(int *)malloc(n*sizeof(int));

	arr2=(int *)malloc(m*sizeof(int));
	
	printf("\n Enter the 1st array:");
	for(int i=0;i<n;i++)
	{	
	scanf("%d",&arr1[i]);
	}

	printf("\n Enter the 2nd array:");
	for(int i=0;i<m;i++)
	{	
	scanf("%d",&arr2[i]);
	}

	UnionOfArray(arr1,arr2,n,m);
	IntersectionOfArray(arr1,arr2,n,m);
	 SymmetricDifference(arr1,arr2,n,m);

free(arr1);
free(arr2);
return 0;
}

int UnionOfArray(int arr1[],int arr2[],int n,int m)
{
	int i=0,j=0;

	while(i<n && j<m)
	{
		if(arr1[i]<arr2[j])
			printf("%d",arr1[i++]);
		else if(arr2[j]<arr1[i])
			printf("%d",arr2[j++]);
		else
			{
			printf("%d",arr2[j++]);
			i++;
			}	

	}
	
	while(i<n)
	{
		printf("%d",arr1[i++]);
	}
	while(j<m)
	{
		printf("%d",arr2[j++]);
	}
return 0;

}

int IntersectionOfArray(int arr1[],int arr2[],int n,int m)
{
	int i=0,j=0;

	while(i<n && j<m)
	{
		if(arr1[i]<arr2[j])
			i++;
		else if(arr2[j]<arr1[i])
			j++;
		else
			{
			printf("\n%d\t",arr2[j++]);
			i++;
			}	

	}
	/*
	while(i<n)
	{
		printf("%d",arr1[i++]);
	}
	while(j<m)
	{
		printf("%d",arr2[j++]);
	}*/
return 0;

}

int SymmetricDifference(int *arr1,int *arr2,int n,int m)
{
	int i=0,j=0;

	while(i<n && i<m)
	{
		if(arr1[i]<arr2[j])
			printf("%d",arr1[i++]);
		else if(arr2[j]<arr1[i])
			printf("%d",arr2[j++]);
		else
			{
				i++;
				j++;
			}
	}

	while(i<n)
	{
		printf("%d",arr1[i++]);
	}
	while(j<m)
	{
		printf("%d",arr2[j++]);
	}
return 0;
}
