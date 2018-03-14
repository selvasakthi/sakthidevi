#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char a[100];
    int i;
    printf("enter the character");
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]==' ')
        {
            printf("%c", toupper(a[i]+1));
        }
        else
        {
            printf("%c",a[i]);
        }
    }
    getch();
}
