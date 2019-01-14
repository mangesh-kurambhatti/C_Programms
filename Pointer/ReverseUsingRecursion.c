 #include<stdio.h>

int ReversePrint(char *input)
{
	if(*input)
		
			ReversePrint(++input);

	printf("%c",*input);
	

}

int main()
{
	char ptr[]="Bharat";
	ReversePrint( ptr );

}
