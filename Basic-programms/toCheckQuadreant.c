#include<stdio.h>

int toCheckQuadrant(int,int);

int main()
{
	int x,y;

	printf("\n Enter the Co-ordinate of X-axis :");
	scanf("%d",&x);
	
	printf("\n Enter the Co-ordinate of Y-axis :");
	scanf("%d",&y);

	
	toCheckQuadrant(x,y);

return 0;

}

int toCheckQuadrant(int x,int y)
{
	if(x>0 && y>0)
		{
			printf("Entered Co-ordinate X=%d , Y=%d is is in 1st Quadreant",x,y);
		}
	elseif

}
