#include<stdio.h>
int DirectSwappingUsingBitWiseOperator(int);

int main()
{
	int n1,n2;
	printf("\n Enter the 1st no :");
	scanf("%d",&n1);

	printf("\n Enter the 2st no :");
	scanf("%d",&n2);

	n1=n1^n2;
	n2=n1^n2;
	n1=n1^n2;

	printf("\n After swapping %d no is %d",n1,n2);	
}
