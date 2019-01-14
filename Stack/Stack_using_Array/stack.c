#include<stdio.h>
#include<stdlib.h>

#define MAX 10

int top=-1;

int STACK[MAX];


int IsStackEmpty()
{
	if(top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int IsStackFull()
{
	if(top==MAX)
	{
		return 1;
	}
	else
		{
		return 0;
	}
}

int Display()
{
	if(top==-1)
	{
		return 0;
	}
	for(int i=top;i!=-1;i--)
	{
		printf("%d ",STACK[i]);
	}
}

int Pop()
{
	if(IsStackEmpty())
	{
		return -1;
	}
	else
	{
		return STACK[top--];
	}
}

int Push(int no)
{
	if(IsStackFull())
	{
		return 1 ;
	}
	else
	{
		STACK[++top]=no;
	}	
}
int main()
{
		
	Push(10);
	Push(20);	
	Push(30);
	Push(40);
	Display();
	printf("\n%d",Pop());
	printf("\n%d",Pop());
	Display();

		return 0;
}
