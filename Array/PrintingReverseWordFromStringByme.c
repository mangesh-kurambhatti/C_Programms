#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int reverseString(char *);

int reverseString(char *str)
{
	int len_string=strlen(str);

	for(int i=len_string;i>=0;i--)
	{
		if(str[i]==' ')
		{
			str[i]='\0';

			printf("%s",&(str[i])+1);
		}

	}
	printf(" %s",str);
}

int main()
{
	char str[]="Hello World";

	reverseString(str);

return 0;
}
