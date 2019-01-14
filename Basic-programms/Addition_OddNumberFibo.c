#include<stdio.h>
int Fibonacci(int);
int Odd(int);
int sum=2;
int main()
{
	int number;
	printf("Enter the number you want to print:");
	scanf("%d",&number);
	Fibonacci(number);
	return 0;
}
int Fibonacci(int number)
{
	int odd;
	//int sum=0;
	int prev=1;
	int current=1,next;
	printf("\n%d",prev);
	printf("\n%d",current);
		
	for(int i=3;i<=number;i++)
	{
		next=prev+current;
		odd=Odd(next);	
		printf("\n%d",next);
		prev=current;
		current=next;
	}

	printf("\nAddition of Odd digit is:%d",odd);
}

int Odd(int next)
{
	//int sum=0;
	if(next % 2!=0)
	{
		sum+=next;
		return sum;
	}
	}
