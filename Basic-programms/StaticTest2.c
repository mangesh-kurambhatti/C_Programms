#include<stdio.h>

extern void Increment();
extern void Display();

void Decrement()
{
	extern int iGlobal;
	
	extern int iSGlobal;
	
	iGlobal--;
	iSGlobal--;
		
}

int main()
{
	Display();
	Increment();
	Display();
	Increment();
	Display();
//	Increment();
	
}
