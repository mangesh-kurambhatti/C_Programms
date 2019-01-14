
/* WAP to accept array of 10 integer and print count of even and odd */

#include<stdio.h>

int CountOfEvenOdd(int*);

int main()
{
	int a[10];
	int i;
		printf("\n Enter the 10 numbers :");
		for(i=0;i<10;i++)
			{
			scanf("%d",&a[i]);
			}
			CountOfEvenOdd(a);
return 0;
}

int CountOfEvenOdd(int a[])
{
		int EvenCount=0;
		int OddCount=0;

		for(int i=0;i<10;i++)
			{
				if(a[i] & 1)
					{
						EvenCount++;
					}
				else
					{
						 OddCount++;
					}

			}
		
			printf("\nCount of Even no is: %d\n",EvenCount);
			printf("\nCount of Odd no is: %d\n",OddCount);
}

