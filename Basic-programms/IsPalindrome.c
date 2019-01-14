#include<stdio.h>

int reverse(int );
int main()
{
	int no;
	
	printf("\n Enter the 1st no :");
	scanf("%d",&no);

	 if(reverse(no)==no)
		printf("\n No is palindrome\n");
	else
		printf("\n No is not palindrome\n ");
		
		
return 0;
}

int reverse(int no)
{
	int rem,reverse=0;
	
	while(no)
	{
		rem=no%10;
		reverse=reverse*10+rem;
		no=no/10;
		
	}
	printf(" Reverse no is : %d",reverse);
	return reverse;
}
