//addition of array elements
#include<stdio.h>
int fun(int v[],int n)
{
int i,sum=0;
for(i=0;i<5;i++)
{
sum+=v[i];
}
return sum;

}

int main()
{
int a[5]={1,2,3,4,5};
printf("%d",fun(a,5));
  return 0
}
