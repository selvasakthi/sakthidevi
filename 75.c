#include<string.h>
void main() 
{
    char s[15];
    int a,b;
    scanf("%s",&s);
    a=strlen(s);
    if(a%2!=0)
    {
     b=a/2;
     s[b]='*';
      printf("%s",s);
    }
   getch();
}
