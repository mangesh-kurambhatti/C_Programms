#include<stdio.h>
extern int multiply(int);
static int i=200;

int add(int x)
{
	return x+i;
}

int main()
{
	printf("Add=%d",add(100));
	printf("multiply=%d",multiply(3));

	
return 0;

}
