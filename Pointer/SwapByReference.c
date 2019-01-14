#include<stdio.h>

int swap(int*,int*);

int main()
{
	int x,y;

	printf("\n Enter the value of x=");
	scanf("%d",&x);

	printf("\n Enter the value of y=");
	scanf("%d",&y);

	printf("\n Before swapping value of x=%d and y=%d",x,y);	

	swap(&x,&y);

return 0;
}

int swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;

	printf("\n After swapping value of x=%d and y=%d",*x,*y);	
}
