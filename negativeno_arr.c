#include<stdio.h>
int main()
{
	int a[20],n,cnt=0,i;
	printf("array ele");
	for(i=0;i<20;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			cnt=cnt+1;
		}
	}
	printf("neg no=%d",cnt);
}

