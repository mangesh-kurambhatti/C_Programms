
 /* WAP to accept array of integer using malloc  and print count of even and odd */

#include<stdio.h>
#include<stdlib.h>

int CountOfEvenOdd(int*,int);

int main()
{
	int n;
	int *array=NULL;
	
	printf("\n Enter the no of Element you want in array[] :");
	scanf("\n%d",&n);

	array=(int *)malloc(n*sizeof(int));

	printf("\n Enter the array element :");
	for(int i=0;i<n;i++)
		{
			scanf("%d",&array[i]);
		}
	
	CountOfEvenOdd(array,n);

return 0;
}

int CountOfEvenOdd(int array[],int n)
{
	int EvenCount=0;
	int OddCount=0;

	for(int i=0;i<n;i++)
		{
			if(array[i] & 1)
				{
					printf("\n [%d]th no in array is odd",i);
					OddCount++;
				}
			else
				{
					printf("\n [%d]th no in array is Even",i);
					EvenCount++;
				}
		}

		printf("\n Count of Eeven no in array is : %d",EvenCount);
		printf("\n Count of Odd no in array is : %d\n\n",OddCount);
}


