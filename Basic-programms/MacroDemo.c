#include<stdio.h>

#define dexpr(x,y) printf(#x "/" #y " is %d \n",x/y)

#define pexpr(expr) printf(#expr " is %d \n",expr)

int main()
{
	dexpr(20,5);
	pexpr(20/5);
}
