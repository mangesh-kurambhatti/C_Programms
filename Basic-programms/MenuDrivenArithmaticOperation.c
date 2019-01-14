#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int AddInt(int,int);
int SubInt(int,int);
int MulInt(int,int);
int DivInt(int,int);
int ModInt(int,int);
float SquareRoot(float);	

int main()
{
	int num1,num2,ch;
do
	{
		printf("\n\n\n  Menu ");
		printf("\n1.Addition");
		printf("\n2.Substraction");
		printf("\n3.Multiplication");
		printf("\n4.Division");
		printf("\n5.Modulus");
		printf("\n6.Square Root");
		printf("\n7.exit");
				
		printf("\n ENTER YOUR CHOICE :");
		scanf("%d",&ch);

		switch(ch)
			{
				case 1:
							printf("\n Enter the 1st number :\n");
							scanf("%d",&num1);

							printf("\n Enter the 2nd number :\n");
							scanf("%d",&num2);
			
							printf("Addition of no is :%d",AddInt(num1,num2));
							
							break;
				case 2:
							printf("\n Enter the 1st number :\n");
							scanf("%d",&num1);

							printf("\n Enter the 2nd number :\n");
							scanf("%d",&num2);
			
								printf("Substraction of no is :%d",SubInt(num1,num2));
							break;
				case 3:
							printf("\n Enter the 1st number :\n");
							scanf("%d",&num1);

							printf("\n Enter the 2nd number :\n");
							scanf("%d",&num2);
			
							printf("Multiplication of no is :%d",MulInt(num1,num2));
							break;
				case 4:
							printf("\n Enter the 1st number :\n");
							scanf("%d",&num1);

							printf("\n Enter the 2nd number :\n");
							scanf("%d",&num2);
			
							printf("Division of no is :%d",	DivInt(num1,num2));
			
							break;
				case 5:
							printf("\n Enter the 1st number :\n");
							scanf("%d",&num1);

							printf("\n Enter the 2nd number :\n");
							scanf("%d",&num2);
			
							printf("Modulus of no is :%d",	ModInt(num1,num2));
							
							break;
				case 6:
							printf("\n Enter the 1st number :\n");
							scanf("%d",&num1);

//							printf("\n Enter the 2nd number :");
//							scanf("%d",&num2);
			
							printf("Square Root of no is :%f",SquareRoot(num1));
							break;
				case 7:
						 	exit(0);

			}			
	}while(ch!=6);
}

int AddInt(int num1,int num2)
{
	int result;

	return result=num1+num2;
	
}

int SubInt(int num1,int num2)
{
	int result;

	return result=num1-num2;
	
}

int MulInt(int num1,int num2)
{
	int result;

	return result=num1*num2;
	
}

int DivInt(int num1,int num2)
{
	int result;

	return result=num1/num2;
	
}

int ModInt(int num1,int num2)
{
	int result;

	return result=num1%num2;
	
}

float SquareRoot(float num1)	
{
	float result;

	return result=sqrt(num1);
	
}
