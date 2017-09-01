#include <stdio.h>
int main()
{
    char d;
    int LowercaseVowel, UppercaseVowel;
    printf("Enter an value: ");
    scanf("%c",&d);
    LowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    UppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (LowercaseVowel||UppercaseVowel)
        printf("%c is a vowel:", d);
    else
        printf("%c is a consonant:", d);
    return 0;
}
