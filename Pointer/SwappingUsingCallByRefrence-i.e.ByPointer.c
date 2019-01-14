//Swapping using pointer

#include<stdio.h>

int CallByRefrence(int*,int*);

int main()
{
	int x=10,y=20;

	printf("x=%d,y=%d before Swapping \n",x,y);
	
	CallByRefrence(&x,&y);

	printf("x=%d,y=%d after swapping\n",x,y);

return 0;
}

int CallByRefrence(int *x,int *y)
{
	int temp=*x;
	 *x=*y;
	*y=temp;

}

/*int CallByrefrence(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
*/
