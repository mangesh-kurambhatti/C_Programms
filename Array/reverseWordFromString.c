// C program to print reverse of words in
// a string.
#include <stdio.h>
#include <string.h>

void printReverse(char str[])
{
	int length = strlen(str);

	// Traverse string from end
	int i;
	for (i = length - 1; i >= 0; i--) 
	{
		if (str[i] == ' ') 
		{

			str[i] = '\0';

			
			printf("%s ", &(str[i]) + 1);
		}
	}

	printf("%s", str);
}

// Driver code
int main()
{
	char str[] = "I AM A GEEK";
	printReverse(str);
	return 0;
}

