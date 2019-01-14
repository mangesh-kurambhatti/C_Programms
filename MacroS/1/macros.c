#include<stdio.h>

#define dexpr(x,y) printf(#x "/" #y"is %d",x/y)
//#define pexpr (expr) printf(#expr ,"is %d",expr)

int main()
{
	//int x,y,expr;
	 dexpr(10,5);
	//int pexpr(20/5);
	return 0;
}
