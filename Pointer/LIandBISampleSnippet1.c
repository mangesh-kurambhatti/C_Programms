//snippet to check architecture is Littile Indian or Big Indian
#include<stdio.h>

int main()
{
	int i=310;
	
	char *ptr=&i;

	printf("\n %d ",*ptr++);
	printf("\n %d ",*ptr++);
	printf("\n %d \n ",*ptr++);

return 0;

}

