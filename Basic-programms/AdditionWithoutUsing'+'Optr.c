#include<stdio.h>
int UsingForLoop(int no1,int no2);
int NormalWay(int no1,int no2);
int main()
{
	int no1,no2,result;
	printf("\n Enter the 1st no :");
	scanf("%d",&no1);

	printf("\n Enter the 2nd no :");
	scanf("%d",&no2);
	
	UsingForLoop(no1,no2);
	 NormalWay(no1,no2);
	return 0;
}


int UsingForLoop(int no1,int no2)
{
int i;
for(i=0;i<no2;i++)
	{
		no1++;
				
	}
printf("\n Result is By Using  For loop is :%d",no1);
}

int NormalWay(int no1,int no2)
{
	int result;
	result=-((-no1)-no2);

	printf("\n Result is %d :",result);


}
