#include<stdio.h>

int main()
{
	int  ch;
	char c;
						
		printf("\n Enter the charcter :");
		scanf("%c",&c);

switch(c)
{
	case 'a':
			
				printf("\n %c character is vowel",c);
				break;
	case 'e':

				printf("\n %c character is vowel ",c);
				break;
	case 'i':

				printf("\n %c character is vowel ",c);
				break;
	case 'o':
				printf("\n %c character is vowel ",c);
				break;
	case 'u':
				printf("\n %c ccharacter is vowel ",c);
				break;	

	default:

				printf("\n Entered char is not vowel IT IS CONSONENT...Samjhi kya..baby?"); 
				break;

}	

return 0;
}
