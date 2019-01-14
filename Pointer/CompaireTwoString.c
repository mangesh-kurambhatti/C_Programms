
// WAP to comapire two strings ,if strings are equal the return 0 else return -1

#include<stdio.h>

int StringCompaire(char*,char*);

int main()
{
	char str1[20],str2[20];

	printf("\n Enter the 1St String -:");
	scanf("%s",str1);

	printf("\n\n Enter the 2nd String -:");
	scanf("%s",str2);

    if(StringCompaire(str1,str2))
		{
			 	printf("match");
	
		}
	else
		{
			printf("Dematch");
		}

return 0;
}

int StringCompaire(char *str1,char *str2)
{
	char *ptr1=str1;
	char *ptr2=str2;
	int count1=0,count2=0;

/*	while(*ptr1 != '\0')
	{
		ptr1++;
		count1++;
	}
	while(*ptr2 != '\0')
	{
		ptr2++;
		count2++;
	}

	printf("\n Length of 1st String is %d",count1++);
	printf("\n Length of 2nd String is%d\n\n ",count2++);

	if(count1++ != count2++)
		{
			printf("\n Length of Strings enterd by user is not same so i am not to check for further scenarios...!\n\n\n");
		}

	while(*ptr1 >= 0)
		{
			ptr1--;
		}
	while(*ptr2 >= 0)
		{
			ptr2--;
		}
*/
	while(*ptr1 != '\0')
	{	
		if(*ptr1==*ptr2)
		{
			ptr1++;
			ptr2++;
			//return 0;		

		}
	else
		{
			return 0;			
		//printf("\n No Match");
		}
	}
return 1;	
}

