#include<stdio.h>
int main()
{
char c;
printf("/n Enter any char from A-Z:-");
scanf("%c",&c);
switch(c)
{
	case 'a':
		printf("\n %c char is vovel(a,e,i,o,u)",c);
		break;
	case 'e':
		printf("\n %c char is vovel(a,e,i,o,u)",c);
		break;
	case 'i':
		printf("\n %c char is vovel(a,e,i,o,u)",c);
		break;
	case 'o':
		printf("\n %c char is vovel(a,e,i,o,u)",c);
		break;
	case 'u':
		printf("\n %c char is vovel(a,e,i,o,u)",c);
		break;
	default:
		printf("\n char is consonent as its not a,e,i,o or u");
		break;
		
}
return 0;
}
