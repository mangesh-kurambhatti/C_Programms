#include<stdio.h>

int main()
{
	extern int multiply2(int);
	extern int multiply1(int);

	printf("output=%d\n",multiply1(10));
	printf("output=%d\n",multiply2(20));

return 0;
}

