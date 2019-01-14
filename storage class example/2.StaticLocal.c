#include<stdio.h>

void increment()
{
	static int i=0;
	i++;
	printf("%d\n",i);
	
}

int main()
{
	increment();
	increment();
	increment();

}
