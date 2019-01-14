/*
	Write a program to print the no in word
	
	e.g.	1234=one two three four
*/


#include<stdio.h>
int reverse(int no);


int reverse(int no)
{
	int rem,rev=0;

	while(no)
	{
		rem=no%10;
		rev=rev*10+rem;
		no=no/10;


	}
return rev;
}


int main()
{
	int no,rem;

	printf("\n Enter the no of which you want in Word :");
	scanf("%d",&no);

	 int res1=reverse(no);
//	 reverse(no);
while(res1)
{
	rem=res1%10;	


	switch(rem)
	{
		case 0:
				
					printf("\tZero ");
					break;
		case 1:
					printf("\tone ");
 					break;
		case 2:
					printf("\tTwo ");
					break;
		case 3:
					printf("\tThree ");
					break;
		case 4:
					printf("\tFour");
					break;
		case 5:
					printf("\tFive");
					break;
		case 6:
					printf("\tSix");
					break;
		case 7:
					printf("\tSeven");
					break;
		case 8:
					printf("\tEight");
					break;
		case 9:
					printf("\tNine");
					break;
	}
res1=res1/10;

}
return 0;
}


