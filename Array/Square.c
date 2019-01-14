

/* WAP to accept array of n integers and print squares out of them */

#include<stdio.>
#include<math.h>

int isSqaure(int*);

int main()
{
	int a[10];
	
	printf("\n Enter the 10 Numbers :");
	for(int i=0;i<10;i++)
		{
			scanf("%d",&a[i]);
		}

	isSquare(a);

return 0;
} 

int isSquare(int a[])
{
int a1;
for(int i=0;i<10;i++)
{
	float b1=sqrt(a[i]);

	a1=b1;
	
	if(a1==b1)
		{
			printf("\n perfect Square %d",a[i]);
		}	
	else
		{
			printf("\n Not Perfect Square %d",a[i]);
		}
	

}
