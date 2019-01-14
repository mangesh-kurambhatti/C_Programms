#include<stdio.h>

int main()
{
	int i=10;

	int *ptr=&i;

	int **ptr2=&ptr;

	int ***ptr3=&ptr2;

printf("%p,%p,%p",ptr3,*ptr3,**ptr3,***ptr3);	

return 0;
}
