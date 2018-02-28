#include<stdio.h>
void main()
{
    int a,flag=0,i;
    printf("enter the value");
    scanf("%d",&a);
    for(i=2;i<=a/2;i++)
    {
        if(a%i==0)
        {
            flag=1;
            break;
        }
    }
        if(flag==0)
        {
            printf("prime number");
        }
        else
        {
            printf("composite number");
        }
}
