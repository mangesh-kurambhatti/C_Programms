#include<stdio.h>

int iGlobal=10;
static int iStaticGlobal=10;

void increment()
{
	int i=10;
	i++;
	iGlobal++;
	iStaticGlobal++;
	
	printf("\n%d\n%d\n%d\n",i,iGlobal,iStaticGlobal);

}

void decrement()
{
	int i=100;
	i--;
	iGlobal--;
	iStaticGlobal--;

	printf("\n%d\n%d\n%d\n",i,iGlobal,iStaticGlobal);

}

int main()
{
	increment();
	decrement();
	increment();
	decrement();
}
