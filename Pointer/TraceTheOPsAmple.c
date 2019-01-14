#include<stdio.h>

int main()
{
	int i=310;
	
	char *ptr=&i;
	
	printf("%d\n",*ptr);
	ptr++;

	printf("%d\n",*ptr);
	ptr++;

	printf("%d\n",*ptr);
	//ptr++;

}
