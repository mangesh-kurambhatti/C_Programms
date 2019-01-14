//to check littile indian or big Indian

#include<stdio.h>

int main()
{
	int i=1;

	char *ptr=&i;

	if(*ptr==1)
	{

		printf("\n It is Littile Indian\n");

	}
	else
	{
		printf("\n It is Big Indian\n");
	}
return 0;
}
