#include<stdio.h>

int myStrlen(char *str)
{
	if(*str)
	{
		char *temp=str;

		while(*temp)
			temp++;
		return temp-str;
			
	}

return 0;
}


int main()
{
	char str[]="mangesh";

	printf("Length is :%d",myStrlen(str));
return 0;
}
