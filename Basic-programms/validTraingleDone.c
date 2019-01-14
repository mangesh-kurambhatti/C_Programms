#include<stdio.h>

int isTraingle(int,int,int);

int main()
{
	int side1,side2,side3;
	
	printf("\n Enter the length of 1st side :");
	scanf("%d",&side1);


	printf("\n Enter the length of 2nd side :");
	scanf("%d",&side2);

	printf("\n Enter the length of 3rd side :");
	scanf("%d",&side3);

	isTraingle(side1,side2,side3);

return 0;
}


int isTraingle(int side1 ,int side2,int side3)
{
	int max;
	if( side1 > side2 && side1 > side3)
		{
			max=side1;
			int result1=side2+side3;
			if(result1>max)
				{
					printf("\n Traingle is valid");
			
				}
			else
				{

					printf("\n not valid");
				}
		}
	else if(side2 > side3)
		{
			max=side2;
			int result2=side1+side3;
			if(result2 >max)
				{
					printf("\n Traingle is valid");
			
				}
			else
				{

					printf("\n not valid");
				}
		
		}
	else
		{
			max=side3;
			int result3=side1+side2;
			if(result3>max)
				{
					printf("\n Traingle is valid");
			
				}
			else
				{

					printf("\n not valid");
				}
		

		}

	printf("\nsLargest side entered by user is :%d",max);

	

}

