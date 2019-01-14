#include<stdio.h>

int iGlobal=0;

static int iStatic=10;

void increment()
{
	int iGlobal=0;
	iGlobal++;
	iStatic++;


}

void decrement()
{
	int iStatic=10;
	
	iGlobal++;
	iStatic--;
	 
}

void main()
{
	increment();
	printf("%d\n %d \n",iGlobal,iStatic);
	decrement();
	printf("%d\n %d \n",iGlobal,iStatic);
	increment();
	printf("%d\n %d \n",iGlobal,iStatic);
}
