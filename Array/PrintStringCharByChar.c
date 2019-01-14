#include<stdio.h>

int PrintString(char *);

int main()
{
	char name[40];

	printf("\n Enter the name:");
	scanf("%s",&name);

	
	PrintString(name);

return 0;
}

int PrintString(char *name)
{
	char *ptr=name;

	while(*ptr != '\0')
	{
		printf("%c",*ptr);
		ptr++;
		
	}
	
}
