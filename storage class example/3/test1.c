#include<stdio.h>
int iGlobal=10;
int iStaticGlobal=10;

void display()
{
	printf("\n%d\n%d\n",iGlobal,iStaticGlobal);
}
void increment()
{
	iGlobal++;
	iStaticGlobal++;
}
