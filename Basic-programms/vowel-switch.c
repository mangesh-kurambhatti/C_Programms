
#include<stdio.h>

int main()
{
	int  ch;
	char c;
		
		
		printf("\n MENU ");
		printf("\n 1. for vowel  A ");
		printf("\n 2. for vowel  E ");
		printf("\n 3. for vowel  I ");
		printf("\n 4. for vowel  O ");
		printf("\n 5. for vowel  U ");
		printf("\n 6.exit");
		printf("\n Enter the choice of user :");
		scanf("%d",&ch); 
				
		printf("\n Enter the charcter :");
		scanf("%d",&c);

	
		switch(ch)
		{
			case 1:
										
					if(c=='a')
					{
						printf("\ncharacter is vowel ..!");

					}
					else
					{
						printf("\ncharacter is consonent..!");
					}
										
					break;
		
			case 2:
					printf("Enter the charcter :");
					scanf("%c",&c);
		
					if(c=='e')
					{
						printf("character is vowel ..!");

					}
					else
					{
						printf("character is consonent..!");
					}
					break;									
			case 3:
					printf("Enter the charcter :");
					scanf("%c",&c);
		
					if(c=='i')
					{
						printf("character is vowel ..!");

					}
					else
					{
						printf("character is consonent..!");
					}
						break;								
			case 4:
					printf("Enter the charcter :");
					scanf("%c",&c);
		
					if(c=='o')
					{
						printf("character is vowel ..!");

					}
					else
					{
						printf("character is consonent..!");
					}
														
					break;									
			case 5:
					printf("Enter the charcter :");
					scanf("%c",&c);
		
					if(c=='u')
					{
						printf("character is vowel ..!");

					}
					else
					{
						printf("character is consonent..!");
					}
														
					break;

			
		}	

return 0;
}

