#include<stdio.h>
#include<string.h>
int main()
{
	char name[100];
	int i;
	printf("\n Enter the string :");
	scanf("%s",name);

	char *ptr=name;
	int count=0;
		//printf("\n String before reverse is :%s",*ptr);
	while(*ptr != '\0')
	{
		ptr++;
		count++;
	}

	//printf("%s",*ptr);

/*	for(i=0;i<=strlen(ptr);i++)
	{
		ptr--;	
		printf("%c\t",*ptr);
		
	}
*/
	while(count>=0)
	{
	//	ptr--;
		printf("%c",*ptr--);
		count--;
	}
return 0;
}
