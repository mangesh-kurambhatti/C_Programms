#include<stdio.h>
#include<stdlib.h>
int SecondMaxCount(int*,int);

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

	printf("\n Maximum count is :%d",SecondMaxCount(arr,num));
	
free(arr);	

return 0;
}


int SecondMaxCount(int *arr,int num)
{
	int i=0;
	int max1=0,max2=0;

	max1=arr[0];

	for(i=1;i<num;i++)
	{
		if(arr[i]>max1)
		{
			if(max1>max2)
			
				max2=max1;
		
			max1=arr[i];
		}
		else
		{
			if(arr[i]>max2)
			{
				max2=arr[i];
			}
		}
	}
return max2;
}
