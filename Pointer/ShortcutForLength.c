#include<stdio.h>

int main()
{
	char input[20];
	int result=0;
	
	printf("\n ENter the input :");
	scanf("%s",input);


	int mystrlen(char *input)
	{
		if(input)
		{
			char *temp=input;
		
			while(*temp)temp++;
				result=temp-input;
		}
		printf("%c",result);
	return 0;
	}

}
