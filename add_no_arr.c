#include<stdio.h>
int main()
{
	int a[50],n,i,ele,loc;
	printf("enter size of array");
	scanf("%d",&n);
	printf("enter element");
	scanf("%d",&ele);
	printf("enter loc");
	scanf("%d",&loc);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=n-1;i>=loc;i--)
	{
		a[i+1]=a[i];
	}
	a[loc]=ele;

	for(i=0;i<n+1;i++)
		printf("%d",a[i]);
}


