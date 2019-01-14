
//Menu Driven Arithmatic operation


#include<stdlib.h>
#include<stdio.h>

#define ADD(x,a,b) ADD##x(a,b)
#define SUB(x,a,b) SUB##x(a,b)
#define MUL(x,a,b) MUL##x(a,b)
#define DIV(x,a,b) DIV##x(a,b)

int ADDint(int x,int y)
{
	return x+y;
}

float ADDfloat(float x,float y)
{
	return x+y;
}

double ADDdouble(double x,double y)
{
	return x+y;
}


int SUBint(int x,int y)
{
	return x-y;
}

float SUBfloat(float x,float y)
{
	return x-y;
}

double SUBdouble(double x,double y)
{
	return x-y;
}

int MULint(int x,int y)
{
	return x*y;
}

float MULfloat(float x,float y)
{
	return x*y;
}

int DIVint(int x,int y)
{
	return x/y;
}

float DIVfloat(float x,float y)
{
	return x/y;
}


int main()
{
	int x,y,ch;

do
	{
	printf("\n MENU \n");
	printf("\n1.ADDITION of INT using MACRO");
	printf("\n2.ADDITION of FLOAT using MACRO");
	printf("\n3.ADDITION of DOUBLE using MACRO");

	printf("\n4.SUBSTRACTION of INT using MACRO");
	printf("\n5.SUBSTRACTION of FLOAT using MACRO");
	printf("\n6.SUBSTRACTION of DOUBLE using MACRO");

	printf("\n7.MULTIPLICATION of INT using MACRO");
	printf("\n8.MULTIPLICATION of FLOAT using MACRO");

	printf("\n9.DIVISION of INT using MACRO");
	printf("\n10.DIVISION of FLOAT using MACRO");
	
	printf("\n11.Exit");
	
	printf("\n \nEnter YOUR choice -:");
	scanf("%d",&ch);

	switch(ch)
			{
				case 1:
					
						printf("\n Addittion of Entered No 10 + 20 = %d\n",ADD(int,10,20));
						break;

				case 2:

						printf("\n Addittion of Entered No 10.5f + 11.5f = %f\n",ADD(float,10.5f,11.5f));
						break;

				case 3:

						printf("\n Addittion of Entered No 13.5554 + 85.2222 = %lf\n",ADD(double,13.5554,85.2222));
						break;

				case 4:

						printf("\n Substraction of Entered No 20 - 10 = %d\n",SUB(int,20,10));
						break;

				case 5:

						printf("\n Substraction of Entered No 20.5f - 10.5f = %f\n",x,y,SUB(float,20.5f,10.5f));
						break;

				case 6:

						printf("\n Substraction of Entered No 40.3333335 - 20.3333335= %lf\n",SUB(double,40.3333335,20.3333335));
						break;


				case 7:
						printf("\n Multiplication of Entered No 20 * 10 = %d\n",MUL(int,20,10));
						break;

				case 8:

						printf("\n Multiplication of Entered No 5.5 * 5.5 = %f\n",MUL(float,5.5f,5.5f));
						break;


				case 9:
						printf("\n Division of Entered No 20 / 10 = %d\n",DIV(int,20,10));
						break;

				case 10:

						printf("\n Division of Entered No 20.5f / 10.5f = %f\n",MUL(float,20.5f,10.5f));
						break;
			
				case 11:
						exit(0);
			}
	}while(ch!=11);
}
