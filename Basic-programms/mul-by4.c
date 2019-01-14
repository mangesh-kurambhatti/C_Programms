#include<stdio.h>

int IsDivisibleBy4(int no)
	{
		return (no&3)==0;
	}

int main()
{
	int no;
	printf("\n Enter the no divisible by 4 :");
	scanf("%d",&no);
	
	if(IsDivisibleBy4(no))
	{
		printf("%d is divisible by 4 ..!:",no);
	
	}
	else 
	{
		printf("%d is not divisible by 4..!:",no);
	}

return 0;
}


