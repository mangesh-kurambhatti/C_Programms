#include<stdio.h>

//int CallByRefrence(int,int);
int CallByValue(int,int);

int main()
{
	int a,b;
	
	printf("Enter the value of 'A' :");
	scanf("%d",&a);

	printf("Enter the value of 'B' :");
	scanf("%d",&b);

	
	// CallByRefrence(int,int);
	 CallByValue(a,b);

return 0;
}

int CallByValue(int a,int b)
{
	int temp;
	
	temp=a;
	a=b;
	b=temp;

	printf("value of A=%d and B=%d \n",a,b);

}

