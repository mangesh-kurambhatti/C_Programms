#include<stdio.h>
#include<stdlib.h>

int EvenOdd(int*,int);
int EvenOddSum(int*,int);
int Reverse(int*,int);

int main()
{
	int i,*arr=NULL;
	int num;
	int ch;

	printf("\n Enter the Size of array :");
	scanf("%d",&num);

	arr=(int *)malloc(num*sizeof(int));

	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}

	do
	{
	printf("\n 1.Even odd");
	printf("\n 2.Even Odd Sum");
	printf("\n 3.Reverse");

	printf("\n Enter your choice :");
	scanf("%d",&ch);

	switch(ch)
	{
		case 1:
				EvenOdd(arr,num);
				break;
		case 2:
				EvenOddSum(arr,num);
				break;

		case 3:
				Reverse(arr,num);
				break;

	}

	}while(ch!=3);
return 0;
}


int EvenOdd(int *arr,int num)
{
		int i;
		int countEven=0;
		int countOdd=0;
			for(i=0;i<=num;i++)
			{
				if(arr[i]%2==0)
				{
				countEven++;
				}
				else
				{
				countOdd++;
				}
			}
	printf("Even Count is=%d AND Odd Count is=%d",countEven,countOdd);
return 0;
}


int EvenOddSum(int *arr,int num)
{
	int Evensum=0,Oddsum=0,rem;
	int i;
	for(i=0;i<=num;i++)
	{
		rem=arr[i]%10;
		if(rem%2==0)
		{
			Evensum=Evensum+rem;
		}	
		else
		{
			Oddsum=Oddsum+rem;
		}
	}

	printf("Even Sum is =%d and Odd Sum is=%d",Evensum,Oddsum);
return 0;
}


int Reverse(int *arr,int num)
{
	int i;
	for(i=num;i>=0;i--)
	{
			printf("%d",arr[i]);
	}
	return 0;
}
