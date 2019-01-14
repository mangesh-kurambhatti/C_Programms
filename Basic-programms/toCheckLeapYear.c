#include<stdio.h>

int toCheckleapYear(int);

int main()
{
	int year;
		
	printf("\n Enter the year to check leap or not :");
	scanf("%d",&year);

	toCheckleapYear(year);

return 0;
}

int toCheckleapYear(int year)
{
	if((year % 4==0 && year %100 != 0 )|| year % 400==0)
	{
			printf("\n %d is a leap Year \n",year);
	}
	else
	{
			printf("\n %d is not leap year \n",year);
	}
}

