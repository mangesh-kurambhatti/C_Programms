

/* Demo Malloc  */

#include<stdio.h>

int Add(int*);

int main()
{
	int n;
	int *array=NULL;

	printf("\n Enter How many Numbers you want :");
	scanf("%d",&n)

	array=(int *)malloc(n*size(int));
	
	if(array=NULL)
		{
			printf("\n failed to allocate..!");
			exit(-1);
		
		}

	Add(array,n)

return 0;

}

int Add(array,n)
{
	sum=0;

	for(int i=0;i<n;i++)
		{
			sum=sum+a[i];
	
		}
	printf("\n Sum of Entered number in array is :%d",sum);

}
