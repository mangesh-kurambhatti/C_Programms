#include<stdio.h>

int Ispalindrome(char *);

int main()
{
	char name[20];
	
	printf("\n Enter the name : ");
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
	char *temp=name;
	
	if(name==NULL)
		temp=name;
	while(*temp)temp++;

			temp--;

	while(name < temp && *name==*temp)
		{
			name++;
			temp--;
		}

		return !(name<temp);
}
