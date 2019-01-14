#include<stdio.h>
//int PrintingBinaryOfNo(int);
//int SetRightAlignedBits(int no ,int position,int bits);
int SwappedBits(int,int,int,int);
int main()
{
	int no1,no2,position,bits;
	
	printf("\n Enter the no  :");
	scanf("%d",&no1);

	printf("\n Enter the no  :");
	scanf("%d",&no2);

	printf("\n Enter the position :");
	scanf("%d",&position);
	printf("\n enter the no of bits :");
	scanf("%d",&bits);

	//PrintingBinaryOfNo(no);
	printf("\nBefore swapping no1 A=%d & no2 B=%d is",no1,no2);
	SwappedBits(no1,no2,position,bits);
	//SetRightAlignedBits(no, position, bits);
return 0;
}


/*int PrintingBinaryOfNo(int no)
{
	int x=1;
	while(x<=no)
		{
			printf("%d",no&x ? 1 :0);
			x=x<<1;
		}
return 0;
}*/

/*int SetRightAlignedBits(int no1 ,no2 ,int position,int bits)
{
	int x1=1,x2=1;				//00000001
	
	x1=x1<<bits;				//00100000
	x1=x1-1;					//000011111
	x1=x1<<(position-bits);	//011111100

	x1=no & x1;				
	x1=x1>>(position-bits);

	printf("After right aligned from %d position  %d bits is: %d",position,bits,x1);
return 0;
}*/

int SwappedBits(int no1 ,int no2 ,int position,int bits)
{
	int x1=1,res1,res2;				
	
	x1=x1<<bits;				
	x1=x1-1;					
	x1=x1<<(position-bits);	

	res1=no1 & x1;				
	
	res1=no2 & x1;

	no1=no1&(~x1);
	no2=no2&(~x1);

	no1=no1 | res2;
	no2=no2 | res1;		
	printf("\nafter swapping no1 A=%d & no2 B=%d is",no1,no2);
return 0;
}
