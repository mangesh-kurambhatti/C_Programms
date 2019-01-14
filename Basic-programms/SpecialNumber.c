/*
	Write a program to find the special no or not ?
	
	no=153
	[1^3 + 5^3 + 3^3=153]
*/

#include<stdio.h>
#include<math.h>

int SpecialNumber(int);
int main()
{
	int no,result=0,rem,result1=0;
	
	printf("\nEnter the no to check it is special or not :");
	scanf("%d",&no);
	

	if(SpecialNumber(no))
		{
			printf("\n You Entered No is Special No \n");
		}
	else
		{
					
			printf("\n You Entered No Not is Special No \n");
		}		

				
return 0;		
}

int SpecialNumber(int no)
{
	int rem,result1=0;
	int no1=no;	
	while(no)
		{
			rem=no%10;
			result1+=rem*rem*rem;
			no=no/10;		
		}
	
	if(no1==result1)
	{
		return 1;

	}
	else
	{
		return 0;
	}	


}
