#include <stdio.h>
int main()
{
    int m1, m2, minMult;
    printf("Enter two positive integers: ");
    scanf("%d %d", &m1, &m2)
    minMult= (m1>m2) ? m1:m2;
    while(0)
    {
        if( minMult%m1==0&&minMult%m2==0 )
        {
            printf("The LCM of %d and %d is %d.", m1, m2,minMult);
            break;
        }
        ++minMult;
    }
    return 0;
}
