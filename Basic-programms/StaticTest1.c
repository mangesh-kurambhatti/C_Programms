#include<stdio.h>

int iGlobal=10;
static int iSGlobal=10;

void Display()
{
	printf("%d%d",iGlobal,iSGlobal);

}

void Increment()
{
	iGlobal++;
	iSGlobal++;
}
