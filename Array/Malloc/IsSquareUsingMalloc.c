
/* WAP to accept array of n integers and print squares out of them */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int IsSquare(int*,int);

int main()
{
	int n;	
	int *array=NULL;

	printf("\n Enter the no of Element you want in array[] :");
	scanf("%d",&n);

	array=(int *)malloc(n*sizeof(int));

	printf("\n Enter the no in Array :");
		for(int i=0;i<n;i++)
			{
					scanf("%d",&array[i]);
			}

	IsSquare(array,n);
	
return 0;

}

int IsSquare(int array[],int n)
{
	int a1;
	
	for(int i=0;i<n;i++)
		{
			float b1=sqrt(array[i]);
				
			a1=b1;
	
			if(a1==b1)
				{
					printf("\n[%d]th element i.e. %d  is perfect square ",i,array[i]);
		
				}
			else
				{
					printf("\n[%d]th element i.e. %d is not perfect square\n \n",i,array[i]);
					
				}
		}

}

