#include<stdio.h>
int main()
{
 int count_words=0,i;
 int count_char=0;
 char str[50];
 printf("Enter string : ");
 for(i=0; str[i]!=NULL; i++)
 gets(char);
 {
   count_char++;
   if(str[i]==' ')
      count_words++;
 }
 printf("\nNumber of characters in string : %d",count_char);
 printf("\nNumber of words in string : % d",count_words+1); 
 getch();
 return 0;
}
