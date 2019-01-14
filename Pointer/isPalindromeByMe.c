#include<stdio.h>

int isPalindrome(char *);

int main()
{
	char name[20];

	printf("\n Enter the String to check palindrome or not..:");
	scanf("%s",name);

	if(isPalindrome(name))
	{
		printf("\n Palindrome");
	}
	else
	{
		printf("\n Not Palindrome");
	}

return 0;
}

int isPalindrome(char *name)
{
	char *ptr1=name;
	char *ptr2=name;

	while(*ptr1 != '\0')
	{
		ptr1++;
	}
	ptr1--;

	while(ptr2<ptr1 && *ptr2==*ptr1)
		{
			ptr2++;
			ptr1--;
		}

/*	if(ptr2 < ptr1)
	{
		return 0;
	}
	else
	{
		return 1;
	}*/
return !(ptr2<ptr1);

}
