#include<stdio.h>

int RecursivePrint(int);

int main()
{
	int num;
	
	printf("\n Enter the no :");
	scanf("%d",&num);

	 RecursivePrint(num);

return 0;	
}

int RecursivePrint(int num)
{
	if(num==0)
		return 0;

	printf("%d\n",num%10);
	RecursivePrint(num/10);

	
}

