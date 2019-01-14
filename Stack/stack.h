

/* Stack .h file */

#ifndef STACK_H
#define STACK_H
#include<stdbool.h>


typedef struct {

	int *m_ipstack;
	int m_isize;
	int m_itop;

}STACK_T;

void Initialize(STACK_T *const st, const int size);

void Deinitialize(STACK_T *const st);

void push(STACK_T *const st,const int data);

void Display(STACK_T *const st);
 
int pop(STACK_T *const st);

_Bool IsFull(STACK_T *const st);

_Bool IsEmpty(STACK_T *const st);

int peep(STACK_T *const st);

#endif
