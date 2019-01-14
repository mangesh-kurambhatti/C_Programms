#include<stdio.h>

int main()
{
	int i=310;
	
	char *ptr=&i;

	printf("\n%d",*ptr);

	ptr++;

	printf("\n%d",*ptr);

	ptr++;
	
	printf("\n%d",*ptr);

return 0;
}
