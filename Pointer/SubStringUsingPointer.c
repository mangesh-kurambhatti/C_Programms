
/*
	WAP accept two string from user  check if string2 present in string1

*/



#include<stdio.h>
#include<stdlib.h>

int StringCheck(char *,char *);

int main()
{
	char str1[20],str2[20];

	printf("\n Enter the 1st String :");
	scanf("%s",str1);

	printf("\n Enter the 2nd String :");
	scanf("%s",str2);

	if(StringCheck(str1,str2))
		{
			printf("\n Present");
		}
	else
		{
			printf("\n Not Present");
		}


return 0;
}


int StringCheck(char *str1,char *str2)
{
  char *ptr1=str1;
  char *ptr2=str2;
	
		
		while(*ptr1 != '\0'|| *ptr2 != '\0')
			{
				if(*ptr1==*ptr2)
					{
						ptr1++;
						ptr2++;
					}
				else
					{
						ptr1++;
					}
			}
		
}


