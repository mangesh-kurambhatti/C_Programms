#include<stdio.h>
#include<math.h>

int EvenOddSum(int);

int main()
{
	int no;

	printf("\n Enter the No :");
	scanf("%d",&no);

	EvenOddSum(no);

return 0;
}

int EvenOddSum(int no)
{
	int rem,even=0,odd=0,result,EVEN=0,ODD=0;

	while(no)
	{
		rem=no%10;

		if(rem & 1)
		{
			odd=odd+rem;
			ODD++;
		}
		else
		{

			even=even+rem;
			EVEN++;
		}
	
		no=no/10;	
	
	}

	result=odd-even;
	printf("\n Total EVEN Digits =%d ",EVEN);
	printf("\n Total ODD Digits =%d ",ODD);
	printf("\n Sum of Odd Number is :%d \n Sum of Even Number is :%d \n Difference Between Odd Number Sum And Even Number Sum is :%d \n",odd,even,result);


}

