#include<stdio.h>
int main()
{
int a,b;
printf("enter the two numbers");
scanf("%d%d",&a&b);
printf("before swapping the number");
swap(a,b);
printf("after swapping the number");
swap(b,a);
getch();
}
