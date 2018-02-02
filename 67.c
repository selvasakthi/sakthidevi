#include<stdio.h>
void main()
{
    int num;
    printf("enter the number");
    scanf("%d",&num);
    while(num%10!=0)
    {
        num++;
    }
    printf("nearest number of multiple number %d",num)
}
