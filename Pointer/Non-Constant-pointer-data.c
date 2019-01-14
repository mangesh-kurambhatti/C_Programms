//snippit of non-constant pointer and data
#include<stdio.h>

int main()
{
	int x;
	char name[]="Hello";
	char *ptr=&name[0];
	ptr[2]='R';
	while(*ptr != '\0')
	{
	printf("\n%c ",*ptr++);
	}
	ptr++;
	printf("\n\n%d\n",*ptr++);
	//ptr=&x;
	//printf("\n %d",ptr);

	
return 0;

}
