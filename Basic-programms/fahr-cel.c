#include<stdio.h>

int main()
{
	int fahr,cel;
	int low,up,step;

	 low=0;
	 up=300;
	 step=20;

	fahr=low;
	while(fahr <= up)
	{
		cel=(5.0/9.0) * (fahr-32.0);
		printf("%d\t%d\n",fahr,cel);
		fahr=fahr+step;
	}
return 0;
}
