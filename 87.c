#include<stdio.h>
void main()
{
    int m,n,i,gcd=0;
    printf("enter the value");
    scanf("%d %d",&m,&n);
    for(i=1;i<=m&&i<=n;i++)
    {
        if((m%i==0)&&(n%i==0))
        {
            gcd=i;
        }
    }
        printf("%d",gcd);
}
