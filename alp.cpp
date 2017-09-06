#include<iostream.h>
void main()
{
	char h;
	cout<<"Enter a character: ";
	cin>>h;
	if((h>='a'&&h<='z')||(h>='A'&&h<='Z'))
	{
		cout<<h<<"is an alphabet";
	}
	else
	{
		cout<<h<<"is not an alphabet";
	}
	getch();
}
