#include<stdio.h>

int TimeValidation(int,int,int);

int main()
{
	int hour,min,sec;

	printf("\n Enter the Hour :");
	scanf("%d",&hour);

	printf("\n Enter the Minute :");
	scanf("%d",&min);

	printf("\n Enter the Second :");
	scanf("%d",&sec);

	
	TimeValidation(hour,min,sec);


return 0;
}

int TimeValidation(int hour,int min ,int sec)
{
	if(hour<0 || min<0 || sec<0)
	{
		printf("Enter time is Negative ....Please Enter Positive Value\n");
		
	}
	if(hour>0 && hour<=24 && min>0 && min<=60 && sec>0 && sec<=60)
		{
			printf("\n Enterd %d Hour : %d Minute : %d Second is valid..! \n",hour,min,sec);

		}
	else
		{
			printf("Entered Time is Not Valid ..Give Different Time..!\n");

		}

}

