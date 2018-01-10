#include<iostream.h>
void main()
{
int n,a=0;
clrscr();
cout<<"Enter num value :";
cin>>n;
while(n>0)
{
n=n/10;
a++;
}
cout<<"no. of digits in given number is:"<<a;
getch();
}
