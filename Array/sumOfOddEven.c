
/* WAP to accept array of 10 integer and print sum of even no and sum of odd no */

#include<stdio.h>

int sumOfEvenOdd(int*);

int main()
{
	int a[10];

	printf("\n Enter the 10 Nos :");
		for(int i=0;i<10;i++)
		{	
			scanf("%d",&a[i]);
		}

		sumOfEvenOdd(a);

return 0;
}

int sumOfEvenOdd(int a[])
{
	int SumEven=0;
	int SumOdd=0;

	for(int i=0;i<10;i++)
		{
			if(a[i] & 1)
				{
					SumOdd=a[i]+SumOdd;			
				}
			else
				{
					SumEven=a[i]+SumEven;
				}
		}	

		printf("\nSum of Even no is :%d\n",SumEven);
		printf("\nSum of Odd no is :%d\n",SumOdd);

}


