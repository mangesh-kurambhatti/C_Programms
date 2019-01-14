#include<stdio.h>
#include<string.h>
int ReverseString(char *);

int main()
{
	char name[30];

	printf("\n Enter the name:");
	scanf("%s",name);

	ReverseString(name);

return 0;
}

int ReverseString(char *name)
{
	char *ptr1=name;

	while(*ptr1 != '\0')
	{
		ptr1++;
	}

	ptr1--;

	for(int i=0;i<=strlen(ptr1);i++)
	{
		printf("%c",*ptr1);
		ptr1--;
	}

}
