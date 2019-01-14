#include<stdio.h>
int main()
{
	int a=0,b=0,c=0;
	printf("\nEnter three num :-");
	scanf("%d%d%d",&a,&b,&c);

	if(a>b && a>c)
	
		printf("num %d is greater.",a);

	else if(b>a && b>c)
	
		printf("num %d is graeter.",b);

	else if(c>a && c>b)
	
		printf("num %d is greater.",c);

	else
	
		printf("all %d,%d,%d are equal.",a,b,c);

return 0;

}
