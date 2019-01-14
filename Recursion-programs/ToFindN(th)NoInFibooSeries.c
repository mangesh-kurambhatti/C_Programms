#include<stdio.h>

int fibo(int);

int main()
{

	int no;

	printf("\n Enter the no :");
	scanf("%d",&no);
	
	printf("fibonacci series is :%d\n",fibo(no));


return 0;
}

int fibo(int no)
{
	if(no==1 || no==2)
			return 1;

	else
		return fibo(no-1)+fibo(no-2);	
		
}
