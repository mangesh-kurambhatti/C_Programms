#include<stdio.h>
extern void increment();
extern void display();


void decrement()
{
extern int iGlobal;
extern int iStaticGlobal;

		iGlobal--;
	iStaticGlobal--;
	
	//printf("\n%d\n%d\n",iGlobal,iStaticGlobal);
}

int main()
{
	display();
	increment();
	display();
	decrement();
	display();
}
