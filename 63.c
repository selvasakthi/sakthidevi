#include<stdio.h>
#include<string.h> 
void main()
{
char s[200];
int count=0,i;
printf("enter the string\n");
scanf("%s",&s[i]);
for(i=0;s[i]!='\0';i++)
{
if(s[i]==' ')
count++;    
}
printf("number of words in given string is:%d\n",count++);
}
