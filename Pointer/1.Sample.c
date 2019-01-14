#include<stdio.h>

int *foo()
{
	int a=100;
	
	int *b=&a;

return *b;
}

int main()
{
	int *x=foo();
	
	printf("%d",x);
}
