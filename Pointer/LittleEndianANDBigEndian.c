#include<stdio.h>

int main()
{
	int i=1;

	char *ptr=&i;

	if(*ptr==1)
	{
		printf("\n It is little Endian.");
	}
	else
	{
		printf("\n It is Big Endian.");
	}

return 0;
}
