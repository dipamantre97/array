#include<stdio.h>
int main()
{
	int a[10],i,sum=0;
	for(i=0;i<10;i++)
	{
		printf("enter value for a[%d]:",i);
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	printf("sum=%d\n",sum);
}

