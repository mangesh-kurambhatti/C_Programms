#include<stdio.h>

int Ispalindrome(char *);
	
int main()
{
	char name[20];

	printf("\n Enter the name :");
	scanf("%s",name);

	if(Ispalindrome(name))
		{
			printf("\n Palindrome");
		}
	else
		{
			printf("\n Not palindrome");
		}

return 0;
}

int Ispalindrome(char *name)
{
	char *ptr1=name;
	char *ptr2=name;

	while(*ptr2 != '\0')
		{
			*ptr2++;
		}
		ptr2--;

	while(*ptr1 == *ptr2 && ptr1 < ptr2)
		{
					ptr1++;
					ptr2--;
					//return 0;
				
		}
	
		return !(ptr1<ptr2);
	

}



/*
int IsPalindrome*/
