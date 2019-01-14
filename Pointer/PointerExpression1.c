//Evaluating some pointer expresion

#include<stdio.h>

int main()
{
	/*char *ptr="Hello";
	int count=0;

	while(*ptr != '\0')
		{
		ptr++;
		count++;
		}
	printf("\n %d\n\n",count);*/

	char name[]="hello";
	char *ptr=&name[3];

	printf("%c\n",*ptr);
return 0;	
}
