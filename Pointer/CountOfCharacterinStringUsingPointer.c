//calculate the length of string and display the count using pointer


#include<stdio.h>
#include<string.h>
int WithoutInbuiltFunction(char*);
int WithInbuiltFunction(char*);

int main()
{
	char name[20];

	printf("\n Enter the Name :");
	scanf("%s",name);
	

	 WithoutInbuiltFunction(name);
	 WithInbuiltFunction(name);

return 0;	
}

int WithoutInbuiltFunction(char *name)
{
	char *ptr=name;
	int count=0;
	while(*ptr != '\0')
	{
		*ptr++;
		count++;
	}
	printf("count of Character is -:%d",count);

return 0;
}

int WithInbuiltFunction(char *name)
{
	char *ptr=name;
	
	int len=strlen(ptr);
	printf("\n Length of String is -:%d\n",len);

return 0;
}
