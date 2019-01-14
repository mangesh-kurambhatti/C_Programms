#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,*arr=NULL,num;

	printf("\n Enter the no of Element in array :");
	scanf("%d",&num);

	arr=(int *)malloc(num*sizeof(int));

	printf("\n Enter the array element :");
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}


	for(i=0;i<num;i++)
	{
	printf("\n The Entered Element are :%d",arr[i]);
	}

free(arr);
return 0;	
}
