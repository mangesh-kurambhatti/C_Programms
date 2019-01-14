#include<stdio.h>

int ReversePrint(char *input)
{
	if(*input)
		
			ReversePrint(input+1);

	printf("%c\t",*input);
}

int main()
{
	char str[]="Bharat";
	ReversePrint(str);
}
