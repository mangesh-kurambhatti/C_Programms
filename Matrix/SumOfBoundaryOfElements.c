#include<stdio.h>
#include<stdlib.h>

int Matrix(int**,int,int,int,int);

int Matrix(int **arr,int row,int col ,int no1,int no2)
{
	
	int Matrix_row=0,Matrix_col=0,i=0,j=0,sum=0,Maximum=0,Current_i=0,Current_j=0;
	
	int **arr1=NULL;
	arr1=(int **)malloc(sizeof(int*)*row);

	for(int i=0;i<row;i++)
		arr1[i]=(int *)malloc(sizeof(int)*col);


	
	while(Matrix_row <= (row-no1))
	{
		while(Matrix_col <= (col-no1))
		{
			for(i= (0 + Matrix_row); i < (no1 + Matrix_row); i++ )
				{
					for(j= (0 + Matrix_col); j < (no2 + Matrix_col); j++)
					{
						sum+=arr[i][j];
					}
				}

				if( Maximum < sum)
				{
					Maximum=sum;
					Current_i=i;
					Current_j=j;
				}

			sum=0;
			Matrix_col++;
		}
	Matrix_row++;
	Matrix_col=0;
	}	

	if(no1 <= row && no2 <= col)
	{
		printf("\nMatrix is:\n");
		
		for(i= (Current_i - no1); i < Current_i ; i++)
		{
			for(j= (Current_j -no2); j < Current_j; j++ )
			{
				printf("%d ",arr[i][j]);
				arr1[i][j]=arr[i][j];	
			}
			printf("\n");
		}

	}
	printf("\n");

	for(i= (Current_i - no1); i < Current_i ; i++)
		{
			for(j= (Current_j -no2); j < Current_j; j++ )
			{
				if( i==(Current_i-no1) || i==(Current_i-1) || j==(Current_j - no2) || j==(Current_j-1))
					{	
						 	sum+=arr1[i][j];					
					}	
			}
			printf("\n");
		}
	
	printf("\nMaximum Sum of only boundary element is:%d\n",sum);
}

int main()
{
	int **arr=NULL;
	int row=0,col=0;
	int no1=0,no2=0;		
	printf("\n Enter the no of Rows :");
	scanf("%d",&row);

	printf("Enter the no of Coloumn :");
	scanf("%d",&col);

	arr=(int **)malloc(sizeof(int*)*row);

	for(int i=0;i<row;i++)
		arr[i]=(int *)malloc(sizeof(int)*col);

	printf	("\n Enter the Elements in Matrix:");
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}

	printf("\n Entered matrix is:\n");
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	printf("\n Enter the No of rows want to print :");
	scanf("%d",&no1);
	
	printf("\n Enter the No of rows want to print :");
	scanf("%d",&no2);

	Matrix(arr,row,col,no1,no2);



return 0;
}

