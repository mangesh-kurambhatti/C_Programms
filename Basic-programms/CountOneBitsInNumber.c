#include<stdio.h>
int CountOneBitsInNumber(int);
int main()
{
	int no,result;
	
	printf("Enter the no:");
	scanf("%d",&no);

	 CountOneBitsInNumber(no);
	
	result=CountOneBitsInNumber(no);

printf("result of no %d having  %d no of ones\n",no,result);
return 0;
}



int CountOneBitsInNumber(int no)
{
	int x=1;
	int count=0;
	
	if(no)
		{
			while(x)
			{
				if(no&x)
					count++;
				x=x<<1;
			}
				
		}
	return count;
}
