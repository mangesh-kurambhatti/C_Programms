#include<stdio.h>
int getUpper(char);
int getLower(char);

int main()
{
	char letter,ch,result;
			
	printf("\n Enter the Lower case CHARACTER :");
	scanf("%c",&letter);

				if(letter>=65 && letter <= 91)
					{
						printf("\n Upper Case Of entred character is :%c ",getUpper(letter));

					}
				else
					{

								printf("\n Lower Case Of entred character is :%c ",getLower(letter));
					}				

return 0;
}

int getUpper(char letter)
{
				letter=letter+32;

				
return letter;
}

int getLower(char letter)
{
				letter=letter-32;

				
return letter;
}
