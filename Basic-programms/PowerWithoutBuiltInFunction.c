#include<stdio.h>
int multiply(int,int);
int power(int,int);

int main()
{
	int a,b;

	printf("\n Enter the value of 1st No -:");
	scanf("%d",&a);

	printf("\n Enter the value of 2nd No -:");
	scanf("%d",&b);

	printf("%d\n",power(a,b));
	
return 0;
}

int multiply(int a,int b)
{
	int res=0;
	
	for(int i=1;i<=b;i++)
	{
		res+=a;
		
			
	}
	return res;
}

int power(int a,int b)
{
	int pow=a;
	
	for(int i=1;i<b;i++)
	{
		pow=multiply(pow,a);
	}
	return pow;

}


