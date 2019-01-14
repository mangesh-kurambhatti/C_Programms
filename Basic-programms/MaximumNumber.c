#include<stdio.h>
int getMax(int,int,int);
int getMin(int,int,int);

int main()
{
	int num1,num2,num3;
	
	printf("Enter the 1st number :");
	scanf("%d",&num1);
	
	printf("Enter the 2nd number :");
	scanf("%d",&num2);
	
	printf("Enter the 3rd number :");
	scanf("%d",&num3);
	
	int max=getMax(num1,num2,num3);
	int min=getMin(num1,num2,num3);
	
	printf("Maximum number :%d\nMinimum number :%d\n",max,min);
	return 0;
}


int getMax(int num1,int num2,int num3)
{
	if(num1>=num2)
	{
		if(num1>=num3)
		{
			return num1;
		}
		else
		{
			return num3;
		}
	}
	else if(num2>=num3)
	{
		return num2;
	}
	else
	{
		return num3;
	}
}


int getMin(int num1,int num2,int num3)
{
	if(num1<=num2)
	{
		if(num1<=num3)
		{
			return num1;
		}
		else
		{
			return num3;
		}
	}
	else if(num2<=num3)
	{
		return num2;
	}
	else
	{
		return num3;
	}
}
