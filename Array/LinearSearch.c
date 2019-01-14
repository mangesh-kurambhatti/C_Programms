#include<stdio.h>
#include<stdlib.h>
int LinearSearch(int*,int,int);

int main()
{
	int num,*arr=NULL;
	int i,key;
	printf("\n Enter the no you want in array :");
	scanf("%d",&num);

	
	arr=(int*)malloc(num*sizeof(int));

	printf("\n Enter the array Element :");
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);	
	}

	printf("\n Enter the key to Search :");
	scanf("\n%d",&key);	

	if(LinearSearch(arr,num,key))
	{
		printf("\n Found");
	}
	else
	{
		printf("\n Not Found");
	}
free(arr);	
return 0;
}

int LinearSearch(int *arr,int num,int key)
{
int i;int flag=0;
	for(i=0;i<num;i++)
	{
		if(arr[i]==key)
		{
			flag=1;
		}
	}	

	if(flag==1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

