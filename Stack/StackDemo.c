

/* Stack .c file */

#include"stack.h"
#include<stdio.h>
#include<stdlib.h>



void Initialize(STACK_T *const st,const int size)
{
	if(st)
		{
			st -> m_isize=size;
			st -> m_itop=-1;
			st -> m_ipstack=(int *)malloc(size*sizeof(int));
		}

} 

void Deinitialize(STACK_T *const st)
{
	if(st)
		{
			st -> m_isize=0;
			st -> m_itop=-1;
			free(st -> m_ipstack);
			st -> m_ipstack=NULL; 		//verify this by commenting 

		}
}

 
void push(STACK_T *const st,const int data)
{
		if(st)
			{
				st -> m_ipstack[++st -> m_itop]=data;  	//verify this by commenting 
	
			}

}


int pop(STACK_T *const st)
{
	int data=0;
	if(st)
		{
			data=st -> m_ipstack[st -> m_itop]; //verify this by commenting
			--st -> m_itop;

		}
	
		return data;
}

void Display(STACK_T *const st)
{
	while(st -> m_itop != -1)
		{
				printf("\n%d",st -> m_ipstack[st -> m_itop]);
				st -> m_itop--;

		}
	

}


_Bool IsFull(STACK_T *const st)
{
	if(st)
		{
			return st -> m_isize ==st -> m_itop-1;
		}

	//return true;
}

_Bool IsEmpty(STACK_T *const st)
{
	if(st)
		{
			return -1==st -> m_itop;
		}

	//return false;
}

int peep(STACK_T *const st)
{
	return st -> m_itop;
}


int main()
{
	int ch;
	int size=0,data;
	STACK_T st;
	st.m_ipstack=NULL;
do
	{
	printf("\n...........................");
	printf("\n1.Initialize");
	printf("\n2.Deinitialize");
	printf("\n3.Push");
	printf("\n4.Pop");
	printf("\n5.Display");
	printf("\n6.Peep");
	printf("\n7.Exit");
	printf("\n............................\n");

	
	printf("\n Enter your choice ..! ->");
	scanf("%d",&ch);

	switch(ch)
		{	
			case 1:
					printf("\n Please Enter the size of stack you want ..:");
					scanf("%d",&size);
			
					Initialize(&st,size);
					
					break;
			case 2:
					printf("if you want to deinitalize your whole stack press ENTER");

					Deinitialize(&st);
					break;
			case 3:
					
		
					printf("\n PUSHING your data into stack..!");
					if(IsFull(&st))
						{
							printf("\n Stack is already full you have to pop something..!");
						}
					else
						{
							printf("\nEnter the data to be pushed in the stack :");
							scanf("%d",&data);
							push(&st,data);
							printf("\n\n Your data pushed on stack successfully..!!");									
						}

					
		
					break;			
		
			case 4:
					printf("\n Poping your data from stack ..!");
					
					if(IsEmpty(&st))
						{
							printf("\n Stack is Empty you have to insert something in stack ..!");
						}					
					else
						{
							data=pop(&st);
							printf("\n Pop data is :%d\n",data);					
						}
		
					break;
			case 5:

					Display(&st);
					break;

			case 6:
					printf("\n The top element at the top of stack is :%d",peep(&st));
					break;
			case 7:
					exit(0);					
		
			}	
	
	}while(ch!=7);

}
