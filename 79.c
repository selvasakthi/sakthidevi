#include<stdio.h>
void main()
{
    int a,b,c,i,temp=0;
    printf("enter the value");
    scanf("%d %d",&a,&b);
    c=a*b;
    for(i=0;i<=c;i++)
    {
        if(c==i*i)
        {
        temp=1;
    }
    }
    if(temp==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
