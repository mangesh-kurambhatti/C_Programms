//Accept the string and display it character by character
#include<stdio.h>

int main()
{
	char name[20];
	
	printf("\n Enter the name :");
	scanf("%s",name);

	char *ptr=name;// &name[0]
	
	while(*ptr!='\0')
	{

	printf("\n%c",*ptr);
	ptr++;
		
	}
	printf("\n");
return 0;
}
