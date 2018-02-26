#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter the value");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("%d",i);
     sum=sum+i;
    }
    printf("\n %d",sum);
}
