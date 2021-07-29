#include<stdio.h>
int main()
{
	int a[10];
	int i,ev=0,odd=0;
	for(i=0;i<10;i++)
	{
		printf("enter values for a[%d]:",i);
		scanf("%d",&a[i]);
		if(a[i]%2==0)
			ev++;
		else
			odd++;

	}
	printf("even=%d,odd=%d",ev,odd);
}


