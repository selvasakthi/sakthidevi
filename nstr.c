#include <stdio.h>
#include <string.h>
void main()
{
   char str[50];
   int  m= 0,k = 0, f = 1;
   clrscr();
   puts("Enter any string\n");
   gets(str);
   for(m= 0;str[m]!='\0';m++)
   {
      k= k+ 1;
   }
   printf("The number of characters in the string are %d\n", k);
   for(m= 0; m<= k-1;m++)
   {
      if(str[m] == ' ')
      {
    f = f + 1;
      }
   }
   printf("The number of words in the string are %d", f);
   getch();
}
