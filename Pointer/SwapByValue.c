#include<stdio.h>

int swap1(int,int);


int main()
{
	int x,y;

	printf("\n Enter the value of x:");
	scanf("%d",&x);

	printf("\n Enter the value of y:");
	scanf("%d",&y);

	printf("\n Before swapping value of x=%d and y=%d",x,y);
	
	swap1(x,y);

	
return 0;
}

int swap1(int x,int y)
{
	int temp;
		temp=x;
		x=y;
		y=temp;

printf("\n After swapping value of x=%d and y=%d",x,y);	

}

