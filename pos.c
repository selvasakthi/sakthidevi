#include <stdio.h>
int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number<=0)
    {
           
       printf("the number is negative number:");
    }
    else
        printf("the number is positive number:");
    return 0;
}
