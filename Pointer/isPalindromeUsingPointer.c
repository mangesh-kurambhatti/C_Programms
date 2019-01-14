//to check string palindrome or not using pointer 
#include<stdio.h>
#include<string.h>
int Palindrome(char*);

int main()
{
	char name[20];

	printf("\n Enter the String to check for Palindrome -:");
	scanf("%s",name);

	if(Palindrome(name))
	{
		printf("\n Entered String is Palindrome..!");
	}
	else
	{
		printf("\n Entered String is not Palindrome..!");
	}

return 0;
}

int Palindrome(char *name)
{
	//char name1[20];
	char *ptr2;
	char *ptr1;
	
	for(ptr1=name ;*ptr1 != '\0';ptr1++);
			for(ptr2=name-1;ptr1 >= ptr2;ptr2++)

			{
				if(*ptr1 == *ptr2)
				{
						ptr1--;
		
				}
				else
				{
						break;
	
				}


			}

		
			
		if(ptr2>ptr1)
			{
				return 1;					
				//printf("\n It is Palindrome ..!");
			}
		else
			{
				return 0;
				//printf("\n It is Not Palindrome..!");			
			}
	return 0;
}
