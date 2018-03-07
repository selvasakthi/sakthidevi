#include<stdio.h>
int main()
{
int n;
printf("enter the number");
scanf("%d",&n);
       if(n%2==0)
        {
           n=n/2;
           printf("%d",n);
        }
        else
        {
        	printf("%d",n);
        }
}
