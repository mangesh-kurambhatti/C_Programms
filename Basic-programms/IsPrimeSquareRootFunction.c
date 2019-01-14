#include<stdio.h>
#include<math.h>
int IsPrime2(int );

int main()
{
	int lb,ub;
	
	printf("\n Enter the lower and upper bound from which to print");
	scanf("%d%d",&lb,&ub);

	for(int i=lb;i<ub;i++)
		{
			if(IsPrime2(i))
				printf("\n %d is prime",i);
			else
				printf("\n %d is not prime",i);
		}

return 0;
}
/*int Isprime(int no)
{
	if(no<2)
		return 0;

	if(no==2)
		return 1;

	for(int i=2;i<no/2;i++)
		{
			if(no%i==0)
				return 0;

		}

		return 1;
}*/


/*int IsPrime1(int no)
{
	if(no<2)
		return 0;
	if(no==2)
		return 1;
	if(no%2==0)
		return 0;

	for(int i=3;i<no/2;i=i+2)
		{
			if(no%i==0)
				return 0;
		}
return 1;
}*/

int IsPrime2(int no)
{
	if(no<2)
		return 0;
	if(no==2)
		return 1;
	if(no%2==0)
		return 0;
	
	for(int i=3;i<(int)(sqrt(no)+1);i=i+2)
		{
			if(no%i==0)
			{
				return 0;
			}

		}
	return 1;

}
