#include<stdio.h>
int main()
{
    int a,count=0;
    printf("enter the value");
    scanf("%d",&a);
    while(a!=0)
    {
        a=a/10;
        count++;
    }
    printf("%d",count);
}
