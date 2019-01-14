#include<stdio.h>

int isFactorial(int);

int main()
{
	int no,Factorial;
	
	printf("\n Enter the no -:");
	scanf("%d",&no);

	Factorial=printf("Factorial of Entered no is :%d\n",isFactorial(no));

return 0;
}

int isFactorial(int no)
{
	if(no==0 || no==1)
			return 1;
	
	else
			return no*isFactorial(no-1);


}
