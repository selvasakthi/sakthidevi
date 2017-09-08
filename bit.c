#include <stdio.h>
int main()
{
    int m = 65;
    int n = 120;
    printf(" value of m=%d n=%d before swapping", m, n);
    m = m ^ n;
    n = m ^ n;
    m = m ^ n;
    printf("value of m=%d n=%d after swapping", m, n);
    return 0;
}
