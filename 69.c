#include<stdio.h>
void main()
{
    int a,b,c,i;
    printf("enter the value");
    scanf("%d %d",&a,&b);
    c=a-b;
    printf("%d",c);
    if(c%2==0)
    {
        printf("it is even");
    }
    else
    {
        printf("odd");
    }
    
}


