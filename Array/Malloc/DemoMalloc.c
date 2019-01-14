

/* Demo Malloc  */

#include<stdio.h>
#include<stdlib.h>

int Add(int*,int);

int main()
{
	int n;
	int *array=NULL;

	printf("\n Enter How many Numbers you want :");
	scanf("%d",&n);

	
		array=(int*)malloc(n*sizeof(int));
	

		printf("\n Enter the array element :");
				for(int i=0;i<n;i++)
					{
						scanf("%d",&array[i]);
					}
	
//printf("\n out of for loop");
/*	if(array=NULL)
		{
			printf("\n failed to allocate..!");
			exit(-1);
		
		}
*/
	Add(array,n);

return 0;

}

int Add(int array[],int n)
{
	int sum=0;

	for(int i=0;i<n;i++)
		{
			sum=sum+array[i];
	
		}
	printf("\n Sum of Entered number in array is :%d",sum);

}
