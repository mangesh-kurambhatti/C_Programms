

/*  Header File of queue */


#ifndef QUEUE_H
#define QUEUE_H

typedef struct {

	int *m_ipqueue;
	int m_ifront;
	int m_irear;
	int m_isize;

} QUEUE_T ;

void Initialize(QUEUE_T *const qt,const int);

void Deinitialize(QUEUE_T *const qt);

void Enqueue(QUEUE_T *const qt,const int);

int Dequeue(QUEUE_T *const qt);

_Bool IsQEmpty(QUEUE_T *const qt);

_Bool IsQFull(QUEUE_T *const qt);  

#endif
