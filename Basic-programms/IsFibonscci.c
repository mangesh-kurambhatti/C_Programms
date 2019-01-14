#include<stdio.h>

int IsFibonacci(int);

int main()
{
	int limit;
		
	printf("\n Enter the limit till you want to print fibonacci series :");
	scanf("%d",&limit);

	IsFibonacci(limit);

return 0;

}

int IsFibonacci(int limit)
{
	int i,previous=1,current=1,next=0;

	printf("\n Fibonacci series is :");
	
	printf(" %d",previous);
	printf(" %d",current);
	for(i=0;i<=limit;i++)
	{
		next=previous+current;
		printf(" %d",next);
		previous=current;
		current=next;

	}
	printf("\n");
}
