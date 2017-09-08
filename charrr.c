#include <stdio.h>
int main()
{
    char s;
    printf("Enter any character: ");
    scanf("%c", &s);
    if((s >= 'a' && s <= 'z') || (s >= 'A' && s <= 'Z'))
    {
        printf("'%c' is alphabet.", ch);
    }
    else if(s >= '0' && s <= '9')
    {
        printf("'%c' is digit.", s);
    }
    else 
    {
        printf("'%c' is special character.", s);
    }

    return 0;
}
