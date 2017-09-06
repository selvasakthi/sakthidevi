#include <stdio.h>
int reversDigits(int sum)
{
    int rev_sum = 0;
    while(sum > 0)
    {
        rev_sum = rev_sum*10 + sum%10;
        sum = sum/10;
    }
    return rev_sum;
}
int main()
{
    int sum = 4562;
    printf("Reverse of no. is %d", reversDigits(sum));
    getchar();
    return 0;
}
