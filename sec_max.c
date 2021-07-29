#include<stdio.h>
int main()
{
	int a[5]={2,4,5,6,7};
	int max,secmax;
	max=secmax=a[0];
	for(i=1;i<5;i++)
	{
		if(a[i]>max)
		{
			secmax=max;
			max=a[i];

		}
		else if(a[i]>secmax)
		{
			secmax=a[i];
		}
		else
		{
			;
		}

	}
	printf("max=%d,secmax=%d",max,secmax);
}


