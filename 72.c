#include<stdio.h>
int main()
{
	char b[5];
	int i,c=0;
	printf("enter the string\n");
	for(i=0;i<=5;i++)
	scanf("%s",&b[i]);
	for(i=0;i<=5;i++)
	{
	if((b[i]=='a')||(b[i]=='e')||(b[i]=='i')||(b[i]=='o')||(b[i]=='u'))	
	{
	c=1;	
	}
	}
	if(c==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
}
