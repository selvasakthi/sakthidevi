#include<stdio.h>
int main()
{
int n,k,val=1,i;
printf("enter the value");
scanf("%d %d",&n,&k);
for(i=1;i<=k;i++)
val=val*n;
printf("%d",val);
}
