#include<stdio.h>
#include<stdlib.h>
int MaxOcuurence(int*,int);

int main()
{
	int num,*arr=NULL;
	int i;
	printf("\n Enter the no you want in array :");
	scanf("%d",&num);

	arr=(int*)malloc(num*sizeof(int));

	printf("\n Enter the array Element :");
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);	
	}	

	printf("\n Maximum count is :%d",MaxOcuurence(arr,num));
free(arr);	
return 0;
}

int MaxOcuurence(int *arr,int num)
{
int i,j,k,maxcount=0;
int count=0;

for(i=0;i<num;i++)
	{
		count=1;
		for(j=i+1;j<num;j++)
		{
			if(arr[i]==arr[j])

				count++;
			if(count>maxcount)
			{
				maxcount=count;
			}
		}
	}

return maxcount; 
}
