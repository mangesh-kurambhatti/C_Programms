#include<stdio.h>

int Table(int);
int main()
{
	int TableNo;		
	printf("\n Enter The No of which you want Table : ");
	scanf("%d",&TableNo);
	
	Table(TableNo);
	
return 0;

}


int Table(int TableNo)
{
	int i=TableNo,j,result;

	
	for(j=1;j<=10;j++)
		{
			result=i*j;
			printf("\n %d * %d = %d",i,j,result);
		}
		printf("\n");


	

	return 0;
}
