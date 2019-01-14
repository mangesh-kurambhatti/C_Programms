
/* queue .c file */

#include"Queue.h"
#include<stdio.h>
#include<stdlib.h>

void Initialize(QUEUE_T *const qt,const int size)
{
	if(qt)
	{
			qt -> m_ifront=-1;
			qt -> m_irear=-1;
			qt ->m_isize=size;
			qt ->m_ipqueue=(int *)malloc(size*sizeof(int));

	}

}


void Deinitialize(QUEUE_T *const qt)
{
	if(qt)
	{
		qt -> m_isize=0;
		qt -> m_ifront=-1;
		qt -> m_irear=-1;
		free(qt -> m_ipqueue);
		qt -> m_ipqueue=NULL;

	}

} 


void Enqueue(QUEUE_T *const qt,const int data)
{
	if(qt && qt -> m_ipqueue)
	{
		qt -> m_ipqueue[++qt -> m_irear]=data;
	}

}

int Dequeue(QUEUE_T *const qt)
{
	int data=0;
	if(qt && qt -> m_ipqueue)
	{
		data=qt -> m_ipqueue[++qt -> m_ifront];
		
	}
		return data;

}

_Bool IsQEmpty(QUEUE_T *const qt)
{
	if(qt && qt->m_ipqueue)
	{
		return qt -> m_ifront ==-1 && qt -> m_irear==-1; 
	}
	//return True;

}

_Bool IsQFull(QUEUE_T *const qt)
{
	if(qt)
	{
		return qt -> m_irear==qt -> m_isize-1;
	}
	//return true;
}


int main()
{
	int data,size,ch;

	QUEUE_T qt;
	qt.m_ipqueue=NULL;
	
	do
	{
		printf("\n......................");
		printf("\n1.Initialize.");
		printf("\n2.Deinitialize.");
		printf("\n3.Insert in the Queue.");
		printf("\n4.Remove from Queue.");
		printf("\n5.exit.");
		printf("\n.......................");
	
		printf("\n Enter your choice :");
		scanf("\n%d",&ch);

		switch(ch)
		{
			case 1:
				printf("\n Initializing your Queue....!");
				
				printf("\n Enter the size of Queue ...:");

				scanf("\n %d",&size);

				Initialize(&qt,size);

				printf("\n Size of your Queue is now allocated you can insert element in it");

				break;
			case 2:
				printf("\n You are here to Deinitialize your Queue..!");	
			
				Deinitialize(&qt);
				break;

			case 3:
			
				printf("\n please insert the data in Queue..[]");

				scanf("%d",&data);
				if(!IsQFull(&qt))
				{
					
					Enqueue(&qt,data);
					printf("\nElement inserted");
				}		
				else
				{
					printf("\n Queue is full ..!");
				}
				
				break;
			case 4:
		
				
			
				if(!IsQEmpty(&qt))
				{
					
					data=Dequeue(&qt);					
					printf("\n removed element is :%d",data);					
					
				}
				else
				{
					printf("\n Queue is empty ...!");
				}
				break;
			case 5:
				exit(0);
							
		}
		
	}while(ch!=5);

}
