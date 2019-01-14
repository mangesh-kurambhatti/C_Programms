#include<stdio.h>
#include<math.h>

int isLCM(int,int);

int main()
{
	int no1,no2;

	printf("\n Enter the 1st Number :");
	scanf("%d",&no1);
	
	printf("\n Enter the 2nd Number :");
	scanf("%d",&no2);

	int result=isLCM(no1,no2);

	printf("\n LCM of Enterd No is :%d",result);

return 0;
}

int isLCM(int no1,int no2)
{
	int no=no2;
	while(1)
	{
		if(no%no2==0 && no%no1==0)
		{
			//return no2;
			break;
		}
		else
		{
		no++;
		}	
	}
return no;

}
