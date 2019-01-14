#include<stdio.h>

int isSubString(char*,char*);

int main()
{
	char str1[100],str2[100];
	
	printf("\n Enter the 1st String :");
	scanf("%s",str1);
	
	printf("\n Enter the 2nd String :");
	scanf("%s",str2);
	
	if(isSubString(str1,str2))
	{
		printf("\n It is Substring.");
	}
	else
	{
		printf("\n It is not SubString.");
	}

return 0;
}


int isSubString(char *str1,char *str2)
{
char *ptr1=str1;
char *ptr2=str2;

	while(*ptr2 != '\0')
	{
		if(*ptr1==*ptr2)
		{
			ptr1++;
			ptr2++;
		}
		else
		{
			ptr1++;
		}
	}
	
	if(str1[*ptr1]==str2[*ptr2])
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
