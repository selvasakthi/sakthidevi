#include<stdio.h>
void main()
{
    int a,flag=0;
    printf("enter the value");
    scanf("%d",&a);
    if(a%2==0)
    {
        flag=1;
    }
    if(flag==0)
    {
        printf("prime number");
    }
    else
    {
        printf("composite");
    }
}
