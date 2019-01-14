/*
	Write a Program to print different Format of star
*/

#include<stdio.h>
int PrintStar(int,int,int);
int PrintStar1(int,int);
int PrintStar2(int,int);
int PrintStar3(int,int,int);
int PrintStar4(int,int);
int PrintStar5(int,int);
int PrintStar6(int,int);
int PrintStar7(int,int);
int PrintStar8(int,int);
int PrintStar9(int,int);

int main()
{
	int row,col,ch,character;


	printf("\n Menu");
	printf("\n1.TO print The Pattern \n ****\n ****\n **** \n");
	printf("\n2.TO print The Pattern \n ****\n ***\n **\n * \n");
	printf("\n3.To print The Pattern \n ****\n  ***\n   **\n    *\n");	
	printf("\n4.TO Print the Pattern \n *   \n **  \n *** \n **** \n");
	printf("\n5.To Print the Pattern \n    *\n   **\n  ***\n **** \n");
	printf("\n6.To Print the Pattern \n   *  \n  *** \n ***** \n");
	printf("\n7.To Print the Pattern \n *****\n  *** \n   *  \n");	
	printf("\n8.To Print the Pattern \n   * \n  ** \n *** \n  ** \n   * \n");
	printf("\n9.To Print the Pattern \n *   \n **  \n *** \n ** \n * \n  ");
	printf("\n10. To Print the Pattern \n   *   \n  ***  \n ***** \n  *** \n   *   \n");	
	printf("\n Enter your choice :");
	scanf("%d",&ch);

	switch(ch)
	{
	int i,j;

		case 1:
				printf("\n Enter the no of star in a row you want :");
				scanf("%d",&row);

				printf("\n Enter the no of star in a coloumn you want :");
				scanf("%d",&col);

				printf("\n Enter the Character you Want :");
				scanf("%d",&character);

				PrintStar(row,col,character);
	
				break;
		case 2:

				printf("\n Enter the no of star in a row you want :");
				scanf("%d",&row);

				printf("\n Enter the Character you Want :");
				scanf("%d",&character);

				PrintStar1(row,character);
	
				break;

		case 3:
				printf("\n Enter the no of star in a row you want :");
				scanf("%d",&row);

				printf("\n Enter the Character you Want :");
				scanf("%d",&character);

				PrintStar2(row,character);
	
				break;
		case 4:

				printf("\n Enter the no of star in a row you want :");
				scanf("%d",&row);

				printf("\n Enter the no of star in a coloumn you want :");
				scanf("%d",&col);

				printf("\n Enter the Character you Want :");
				scanf("%d",&character);

				PrintStar3(row,col,character);
	
				break;
		case 5:
				printf("\n Enter the no of star in a row you want :");
				scanf("%d",&row);

				printf("\n Enter the Character you Want :");
				scanf("%d",&character);
								
				PrintStar4(row,character);
				break;	
	
		case 6:
				printf("\n Enter the no of star in a row you want : \n");
				scanf("%d",&row);
								
				printf("\n Enter the Character you Want :");
				scanf("%d",&character);

				PrintStar5(row,character);
				break;	

		case 7:
				printf("\n Enter the no of Star in a row you want : \n");
				scanf("%d",&row);

				printf("\n Enter the Character you Want :");
				scanf("%d",&character);

				PrintStar6(row,character);
				break;
		case 8:
				printf("\n Enter the no of Star in a row you want : \n");
				scanf("%d",&row);

				printf("\n Enter the Character you Want :");
				scanf("%d",&character);

				PrintStar7(row,character);
				break;	

		case 9:
				printf("\n Enter the no of Star in a row you want : ");
				scanf("%d",&row);

				printf("\n Enter the Character you Want :");
				scanf("%d",&character);

				PrintStar8(row,character);
				break;	

		case 10:
				printf("\n Enter the no of Star in Diamond you want :");
				scanf("%d",&row);

				printf("\n Enter the Character you Want :");
				scanf("%d",&character);

				PrintStar9(row,character);
				break;
		}

	
return 0;
}


int PrintStar(int row,int col,int character)
{

	int i,j;
			for(i=1;i<=col;i++)
					{
						for(j=1;j<=row;j++)
						{
							printf(" *");
													
						}
						printf("\n");

					}

return 0;
}

int PrintStar1(int row,int character)
{
	/*  ****
		***
		**
		*
   */
	int i,j;
	
	for(i=row;i>=1;i--)
		{
			
			for(j=i;j>=1;j--)
				{
					printf("*");
				}
	printf("\n");
				
}
		
return 0;
}

int PrintStar2(int row,int character)
{
	/* 
		****
		 ***
		  **
		   *
	*/
	int i,j;

	for(i=1;i<=row;i++)
		{
			for(j=1;j<=i;j++)
			
				printf(" ");
			for(j=1;j<=row-i+1;j++)
				printf("*");
			
			printf("\n");		
		}

		

}


int PrintStar3(int row,int col,int character)
{
	/*		*
			**
			***	
			****   */
	int i,j;
	
	for(i=1;i<=col;i++)
		{
			for(j=1;j<=i;j++)
			{
				printf("*");				

			}
		printf("\n");
		}

return 0;
}

int PrintStar4(int row,int character)
{
	/* 
			*
		   **
		  ***
		 ****			

	*/
	int i,j,k;

	for(i=1;i<=row;i++)
		{
		for(k=1;k<=row-i;k++)
			
				
				printf(" ");
		for(j=1;j<=i;j++)
				printf("*");
		
				
			
			printf("\n");
			
		}

}

int PrintStar5(int row,int character)
{
	/*
		*
	   ***
	  *****
	*/
	int i,j,k;

	for(i=1;i<=row;i++)
		{
		for(k=1;k<=row-i;k++)
			
				printf(" ");
		for(j=1;j<=2*i-1;j++)
				printf("*");
		
				
			
		printf("\n");
			
		}
}

int PrintStar6(int row,int character)
{
	/*
		*****
		 ***
		  * 
	*/

	int i,j;

	for(i=row;i>=1;i--)
		{
			for(j=1;j<=row-i;j++)
				printf(" ");
		
			for(j=2*i-1;j>=1;j--)
				printf("*");

		printf("\n");

		}
}


int PrintStar7(int row,int character)
{
	/*
		*
	   **
	  ***
	   **
		*
	*/	
	
	int i,j,k;

	for(i=1;i<=row;i++)
		{
			for(j=1;j<=row-i;j++)
				printf(" ");

			for(j=1;j<=i;j++)
					
					printf("*");
					printf("\n");
		}
	for(i=row-1;i>=1;i--)
		{
			for(j=1;j<=row-i;j++)
				printf(" ");

			for(j=1;j<=i;j++)
					
					printf("*");
					printf("\n");


		}				
}	

int PrintStar8(int row,int character)
{
	/*
		*
		**
		***
		**
		*
	*/
int i,j;

	for(i=1;i<=row;i++)
		{
			for(j=1;j<=i;j++)
			printf("*");
		printf("\n");

		}
	for(i=row-1;i>=1;i--)
		{
			for(j=1;j<=i;j++)

			printf("*");
			printf("\n");
		}	
}

int PrintStar9(int row,int character)
{
	/*
		*
	   ***
	  *****
	   ***
		*
	*/
int i,j;

	for(i=1;i<=row;i++)
		{
			for(j=1;j<=row-i;j++)
				printf(" ");
			for(j=1;j<=2*i-1;j++)
				printf("*");
			printf("\n");

		}
	for(i=row-1;i>=1;i--)
	{
			for(j=1;j<=row-i;j++)
				printf(" ");
			for(j=1;j<=2*i-1;j++)
				printf("*");
			printf("\n");

	}

}

