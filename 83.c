#include<stdio.h>
void main()
{
    int a,b,i;
    printf("enter the value");
    scanf("%d %d",&a,&b);
    for(i=0;i<4;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",(a/b));
        }
        else
        {
            printf("%d\n",(a%b));
        }
    }
}



