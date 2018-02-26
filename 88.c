#include<stdio.h>
void main()
{
    int m,n,lcm;
    printf("enter the value");
    scanf("%d %d",&m,&n);
    lcm=(m>n)?m:n;
    while(1)
    {
        if((lcm%m==0)&&(lcm%n==0))
        {
        printf("%d",lcm);
        break;
        }
    ++lcm;
    }
}
