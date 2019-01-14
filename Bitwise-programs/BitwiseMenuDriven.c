#include<stdlib.h>
#include<stdio.h>


int DetermineTheBitAtParticularPosition(int,int);
int DirectSwappingUsingBitWiseOperator(int,int);
int SwapBitsOfParticularNO(int,int,int,int);
int ReplaceSetBitsDennisBabu(int,int,int,int);
int SetRightAlignedBits(int,int,int);
int TurnOffRightMostBits(int);
int CountNoOfOneBits(int);
int CountNoOfZerosBits(int);
int TurnOffBits(int,int,int);
int TurnOnBits(int,int,int);
int ToggleBits(int,int,int);

int main()
{
	int result,no1,position,bits,ch,no2;
	
do
	{
	

	printf("\n MENU \n");
	printf("\n 1.Check for turn off Bits ");
	printf("\n 2.Check for turn on bits");
	printf("\n 3.Check for toggle bits");
	printf("\n 4.Check for No of Ones");
	printf("\n 5.Check for No of Zeros");
	printf("\n 6.Check for Turn Off Right Most Bits");
	printf("\n 7.Pick bits of YOUR choice from no and in bonus get value of that bits only");
	printf("\n 8.replace set of bits ");
	printf("\n 9.Swapping set of Bits ");
	printf("\n 10.Swapping No using Bitwise operator ");
	printf("\n 11.Determine The bit at particular loaction");
	printf("\n 12.exit\n");

	printf("\n Enter the choice :");
	scanf("%d",&ch);

	switch(ch)
		{
			case 1:
					
			printf("\n Enter the number to perform operation :");
			scanf("%d",&no1);

					printf("\n Enter the position :");
					scanf("%d",&position);

					printf("\n Enter the bits :\n ");
					scanf("%d",&bits);	
					
					result=TurnOffBits(no1,position,bits);
					printf("After Turning off %d bits from %d is %d\n",bits,no1,result);
					break;
			case 2:
		printf("\n Enter the number to perform operation :");
		scanf("%d",&no1);

					printf("\n Enter the position :");
					scanf("%d",&position);

					printf("\n Enter the bits :");
					scanf("%d",&bits);	
					
					result=TurnOnBits(no1,position,bits);
					printf("After Turning ON %d bits from %d is %d\n",bits,no1,result);
					break;
			case 3:
			printf("\n Enter the number to perform operation :");
		scanf("%d",&no1);

					printf("\n Enter the position :");
					scanf("%d",&position);

					printf("\n Enter the bits :");
					scanf("%d",&bits);	
					
					result=ToggleBits(no1,position,bits);
					printf("\n After TOGGLING BITS %d bits from %d is %d \n",bits,no1,result);
					break;


			case 4:
			printf("\n Enter the number to perform operation :");
		scanf("%d",&no1);


					result=CountNoOfOneBits(no1);
					printf("\n after counting of no of ONES from %d is %d\n",no1,result);
					break;			
			case 5:
					printf("\n Enter the number to perform operation :");
		scanf("%d",&no1);


					result=CountNoOfZerosBits(no1);
					printf("\n after counting of no of ZEROS from %d is %d\n",no1,result);
							
					break;

			case 6:
			printf("\n Enter the number to perform operation :");
		scanf("%d",&no1);

	
					result=TurnOffRightMostBits(no1);
					printf("\n After Turning of Right Most Bit from %d is %d\n",no1,result);
					
					break;

			case 7:
							printf("\n Enter the number to perform operation :");
					scanf("%d",&no1);

					printf("\n Enter the position :");
					scanf("%d",&position);

					printf("\n Enter the bits :\n ");
					scanf("%d",&bits);	

					result=SetRightAlignedBits(no1,position,bits);
					printf("\n After right Aligned value of  %d is %d\n",no1,result);
					break;

			case 8:
			printf("\n Enter the number to perform operation :");
			scanf("%d",&no1);

					printf("\n Enter the 2nd No with which you want to replace ");
					scanf("%d",&no2);					
			
					printf("\n Enter the position :");
					scanf("%d",&position);

					printf("\n Enter the bits :\n ");
					scanf("%d",&bits);	
				
					result=ReplaceSetBitsDennisBabu(no1,no2,position,bits);
					break;	
			case 9:
					printf("\n Enter the 1st number to  perform operation :");
					scanf("%d",&no1);

			
					printf("\n Enter the 2nd No To perform Operation :");
					scanf("%d",&no2);					
			
					printf("\n Enter the position :");
					scanf("%d",&position);

					printf("\n Enter the bits :\n ");
					scanf("%d",&bits);	
								
						printf("\nBefore Swapping the bits A=%d \n B=%d ",no1,no2);

					SwapBitsOfParticularNO(no1,no2,position,bits);
				
							break;

			case 10:
					printf("\n Enter the 1st number to  perform operation :");
					scanf("%d",&no1);

			
					printf("\n Enter the 2nd No To perform Operation :");
					scanf("%d",&no2);					

					DirectSwappingUsingBitWiseOperator(no1,no2);
					break;
			
				case 11:
					printf("\n Enter the number to  perform operation :");
					scanf("%d",&no1);
					
					printf("\n Enter the position :");
					scanf("%d",&position);

					/*printf("\n Enter the bits :\n ");
					scanf("%d",&bits);*/	


					 DetermineTheBitAtParticularPosition(no1,position);
					break;
				case 12:

			printf("Your choice is wrong ...i am exiting please compile again..!thanx");
					break;

			default:
					exit(0);
		
		}
	}while(ch!=12);	
return 0;
}


int TurnOffBits(int no1,int position,int bits)
{
	int x;
	x=1;
	x=x<<bits;
	x=x-1;
	x=x<<(position-bits);
	x=~x;
	return no1&x;

}



int TurnOnBits(int no1,int position,int bits)
{
	int x;
	x=1;
	x=x<<bits;
	x=x-1;
	x=x<<(position-bits);
	return no1|x;

}




int ToggleBits(int no1,int position,int bits)
{
	int x;
	x=1;
	x=x<<bits;
	x=x-1;
	x=x<<(position-bits);
	return no1^x;
}

int CountNoOfOneBits(int no1)
{
	int x=1,count=0;
	if(no1)
	{
		while(x<=no1)
		{
			if(no1&x)
				count++;
		
			x=x<<1;
		}


		}
	return count;
}


int CountNoOfZerosBits(int no1)
{
int x=1,count=0;


		while(x<=no1)
		{
			if(no1&x)
				x=x<<1;
			else
				count++;
				x=x<<1;
		}		
	return count ;
}



int TurnOffRightMostBits(int no1)
{
	int x=1;
	while(x)
	{
		if(no1&x)
		{
			break;
		}
		else
		{
			x=x<<1;			
		}
	}
	x=~x;
	return no1&x;
}



int SetRightAlignedBits(int no1 ,int position,int bits)
{
	int x=1;
	x=x<<bits;
	x=x-1;
	x=x<<(position-bits);
	//x=~x;
	x=no1&x;
	x=x>>(position-bits);
	return x;
}


int ReplaceSetBitsDennisBabu(int no1,int no2,int position ,int bits)
{

		int x1=1,x2=1;
	x1=(1<<bits)-1;
	x1=x1<<(position-bits);
	x1=x1 & no1;
	no1=no1 & (~x1);
	x1=x1>>(position-bits);
	
	

	x2=x2<<bits-1;
	x2=x2<<(position-bits);
	x2=x2 & no2;
	//no2=no2 & (~x2);	
	x2=x2>>(position-bits);
	

	x1=x1 ^ x2;
	x2=x1 ^ x2;
	x1=x1 ^ x2;

	x1=x1<<(position-bits);
	x2=x2<<(position-bits);
	
	no1=no1 | x2;
	//no2=no2 | x2;

	printf("\nAfter Swapping the bits A=%d \n B=%d ",no1,no2);
	return 0;

	

}

int SwapBitsOfParticularNO(int no1,int no2,int position,int bits)
{
	int x1=1,x2=1;
	x1=(1<<bits)-1;
	x1=x1<<(position-bits);
	x1=x1 & no1;
	no1=no1 & (~x1);
	x1=x1>>(position-bits);
	
	

	x2=x2<<bits-1;
	no2=no2 & (~x2);	
	x2=x2>>(position-bits);
	

	x1=x1 ^ x2;
	x2=x1 ^ x2;
	x1=x1 ^ x2;

	x1=x1<<(position-bits);
	x2=x2<<(position-bits);
	
	no1=no1 | x1;
	no2=no2 | x2;

	printf("\nAfter Swapping the bits A=%d \n B=%d ",no1,no2);
	return 0;
}

int DirectSwappingUsingBitWiseOperator(int no1,int no2)
{
	no1=no1^no2;
	no2=no1^no2;
	no1=no1^no2;
 
	printf("After swapping no A=%d and B=%d ",no1,no2);

}

int  DetermineTheBitAtParticularPosition(int no1,int position)
{
	int x1=1;
	x1=x1<<(position-1);
	x1=no1 & x1;
	x1=x1>>(position-1);
	if(x1)
	{
		printf("particular bit at position %d is %d ",position,x1);
	}
	else
	{
		printf("particular bit at position %d is %d ",position,x1);
	}
	
	
}	



