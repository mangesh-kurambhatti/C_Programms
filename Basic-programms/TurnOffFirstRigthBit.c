#include<stdio.h>

int TurnOffFirstRigthBit(int);

int main()
{
	int no,result;
	printf("Enter the no :");
	scanf("%d",&no);
	
	result=TurnOffFirstRigthBit(no);

	printf("the no %d after turnin off is %d \n",no,result);
return 0;
}

int TurnOffFirstRigthBit(int no)
{

	int result=0;
	/*	
	if(no)
	{
		int x=1;
		while((no&x)==0)
			{
				x=x<<1;	
			
			}
		result=no&(~x);
	}*/
	result=no&(no-1);

	return result;
		
}
