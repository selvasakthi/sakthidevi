#include<stdio.h>
void main()
{
    int n,k,a[50],i;
    printf("enter the elements");
    scanf("%d %d",&n,&k);
    for(i=1;i<=n;i++)
    {
        scanf("\n%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
    if(k==i)
    {
        printf("%d",a[i]);
    }
    }
}
