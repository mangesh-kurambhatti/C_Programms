#include<stdio.h>

int ToPrintCoolDude(int);
int main()
{
	int lbw,upb;

	printf("\n Enter the lower bound:");
	scanf("%d",&lbw);

	printf("\n Enter the upper bound:");
	scanf("%d",&upb);


	for(int i=lbw;i<=upb;i++)
	{
		ToPrintCoolDude(i);	
	}
return 0;
}

int ToPrintCoolDude(int i)
{
	if(i%5==0 && i%7==0)
	{
		printf("\nCool Dude");	

	}
	else if(i%5==0)
	{
		printf("\nCool");
	}
	else if(i%7==0)
	{
		printf("\nDude");
	}
	else
	{
		printf("\n%d",i);
	}
}
