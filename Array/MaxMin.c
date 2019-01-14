

/* WAP to accept an array of 10 integer from user and display max and min from them */ 

#include<stdio.h>

int Max1(int*);
int Min1(int*);

int main()
{
	int a[10];

	printf("\n Enter the 10 elements :");
	for(int i=0;i<10;i++)
		{
			scanf("%d",&a[i]);	
		}

	printf("\nMaximum number from an array :%d",Max1(a));
	printf("\nMaximum number from an array :%d\n",Min1(a));
	

return 0;		
}

int Max1(int a[])
{
	int max1=a[0];

	for(int i=1;i<10;i++)
		{
			if(a[i]>max1)
			{
				max1=a[i];		
			}
		
		}
		return max1;

}

int Min1(int a[])
{
	int min1=a[0];

	for(int i=1;i<10;i++)
		{
			if(a[i]<min1)
			{
				min1=a[i];		
			}
		
		}
		return min1;

}
