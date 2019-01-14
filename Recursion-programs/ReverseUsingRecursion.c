#include<stdio.h>

int Reverse(int);

int main()
{
	int no;

	printf("\n Enter the no :");
	scanf("%d",&no);


//	printf("%d\n",Reverse(no));
	Reverse(no);

return 0;
}

int Reverse(int no)
{
	int result;
	if(no==0)
		return 0;

	else

		 result=no%10;

		printf("%d",result);

		Reverse(no/10);
}
