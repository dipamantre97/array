#include<stdio.h>
int main()
{
	int i,a[5]={4,6,2,3,8};
	int min,max;
	min=max=a[0];
	for(i=1;i<5;i++)
	{
		if(a[i]< min)
			min=a[i];
		if(a[i]>max)
			max=a[i];
	}
	printf("min=%d,max=%d",min,max);
}

	 
