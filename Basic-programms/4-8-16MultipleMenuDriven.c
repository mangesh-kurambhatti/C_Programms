#include<stdio.h>
int CheckForMultipleOf4(int);
int CheckForMultipleOf8(int);
int CheckForMultipleOf16(int);

int main()
{
	int n,ch,result;
do
	{	
	printf("\n MENU \n");
	printf("\n 1.Check for Multiple of 4 ");
	printf("\n 2.Check for Multiple of 8 ");
	printf("\n 3.Check for Multiple of 16");
	printf("\n 4.exit.\n");
	printf("\n Enter the choice :");
	scanf("%d",&ch);


	printf("\n Enter the Number :");
	scanf("%d",&n);

	switch(ch)
	{
		case 1:
				result=CheckForMultipleOf4(n);
				break;
		case 2:
				result=CheckForMultipleOf8(n);
				break;
	
		case 3:
				result=CheckForMultipleOf16(n);
				break;
		default:
				printf("\n You Enterd a Wrong Choice ..!");

	}

}while(ch!=4);
return 0;
}

int CheckForMultipleOf4(int n)
{
	if(n & 3)
		{
			printf("%d ",n&3);
			printf("\n No is Not Multiple of 4 ");	
		}
	else
		{
			printf("%d ",n&3);
			printf("\n No is  Multiple of 4 \n ");
		}
}

int CheckForMultipleOf8(int n)
{
	if(n&7)
		{
		printf("\n No is Not Multiple of 8 ");
		}
	else
		{
			printf("\n No is  Multiple of 8");
		}
}

int CheckForMultipleOf16(int n)
{
	if(n&15)
		{
			printf("\n No is Not Multiple of 16 ");
		}
	else
		{
			printf("\n No is  Multiple of 16 ");
		}
}
