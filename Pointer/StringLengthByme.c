#include<stdio.h>

int main()
{
	char name[100];
	int count=0;

	printf("\n Enter the String :");
	scanf("%s",name);

	char *ptr=name;
	while(*ptr != '\0')
	{
		ptr++;
		count++;
	}

	printf("\n Length of String is :%d",count);
}
