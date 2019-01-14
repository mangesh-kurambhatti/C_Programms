 #include<stdio.h>
#include<malloc.h>

# define MAX 10

int top = -1;
int Stack[MAX];

int IsStackEmpty()
{
if(top == -1)
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
if(top == MAX)
{
return 1;
}
else
{
return 0;
}
}

void Display()
{
int i = 0;
if(top == -1)
{
return;
}
for(i = top; i != -1; i--)
{
printf("%d",Stack[i]);
}
}
int pop()
{
int no = 0;

if(IsStackEmpty())
{
return -1;
}
else
{
return Stack[top--];
}
}

void push(int no)
{
if(IsStackFull( ))
{
return;
}
Stack[++top] = no;
}

int main(int argc, char *argv[])
{
push(10);
push(20);
push(30);
push(40);
Display();
printf("\n%d",pop());
printf("\n%d",pop());
Display();
return 0;
}
