#include<stdio.h>
int main()
{
int n,a,b;
printf("enter the number");
scanf("%d",&n);
while(n>0)
{
s=n%10;
a=a+s;
b=n/10;
n++;
}
printf("the sum value is");
getch();
}
