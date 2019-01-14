#include<stdio.h>

	int TurnoffBits(int,int,int); //prototype //function declaration



int main()
{

	int number,position,NoOfBits;
	printf("Enter the number,position and no of bits to turn off");
	scanf("%d%d%d",&number,&position,&NoOfBits);
	
	int result=TurnoffBits(number,position,NoOfBits);

	printf("After turning off %d bits from position %d of %d is %d",NoOfBits,position,number,result);
	
	return 0;
	

}

int TurnoffBits(int no,int pos,int bits)
{

	int x=1;				// x la equal to 1 assign kela 																	->  00000001
	x=x<<bits;				//suppose mla 2 bit ne shift karaychay so mi 2 bit  ne shift kela   							->  00000100
	x=x-1;					// ata aplyala 2 bit 1 havyat so tyatun 1 minuskara    		->  00000100 - 1 so we will get 	->	00000011
	x=x<<(pos-bits);		//ata aplyala tya bits acurrate 4th position la anaychay so use this formula and ans will be 	->  00001100
	x=~x;					// now make complement of it  so we will get													->  11110011 						
	
	return no&x;

	// return no & ~((1<<bits-1)<<(pos-bits))
}


