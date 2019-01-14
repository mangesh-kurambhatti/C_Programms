#include<stdio.h>
#include<string.h>
int ReverseString(char *,char*);

int main()
{
	char name1[30],name2[40];

	printf("\n Enter the name:");
	scanf("%s",name1);

	printf("\n Enter the name:");
	scanf("%s",name2);

	if(ReverseString(name1,name2))
	{
		printf("Match");
	}
	else
	{
		printf("Not match");
	}

return 0;
}

int ReverseString(char *name1,char *name2)
{
	char *ptr1=name1;
	char *ptr2=name2;

	while(*ptr1 != '\0')
	{
		if(*ptr1==*ptr2)
		{
			ptr1++;
			ptr2++;
		}
		else
		{
			return 0;
		}
	}

return 1;
}
