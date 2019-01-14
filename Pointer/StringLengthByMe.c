#include<stdio.h>

int myStrlen(char *str)
{
	if(*str)
	{
		char *temp=str;

		while(*temp++)
			{
				return temp-str;
			}
	}


}


int main()
{
	char str[]="mangesh";

	printf("Length is :%d",myStrlen(str));
}
