
/* WAP to accept of 10 integer array and print it in reverse order */

#include<stdio.h>

int ReverseOrder(int*);

int main()
{
	int a[10];
	int i;
	printf("\nEnter the 10 numbers :");
	for(i=0;i<10;i++)
	{	
		scanf("%d",&a[i]);
	}


	ReverseOrder(a);

return 0;	
}

int ReverseOrder(int a[])
{
	printf("\nArray in reverse order :\n");
	for(int i=9;i>=0;i--)
		{

			printf("%d\n",a[i]);
			
		}

}

